@class NSString, NSDictionary, NSData, MPAVItem, MPMusicPlayerQueueDescriptor;

@interface MPPlaybackContext : NSObject <NSSecureCoding, NSCopying> {
    MPAVItem *_playerCurrentItem;
}

@property (class, readonly, nonatomic) BOOL supportsAutoPlay;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long actionAfterQueueLoad;
@property (readonly, nonatomic) BOOL containsRestorableContent;
@property (readonly, nonatomic) BOOL shouldBecomeActive;
@property (nonatomic) long long shuffleType;
@property (nonatomic) long long repeatType;
@property (nonatomic) long long queueEndAction;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (copy, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *siriReferenceIdentifier;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) BOOL supportsAccountRectification;

+ (Class)queueFeederClass;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionComponents;
- (void)clearStartItem;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
