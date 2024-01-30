@class NSString;

@interface PHVideoRequestBehaviorSpec : NSObject <PLVideoChoosingOptions, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long version;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic, getter=isStreamingAllowed) BOOL streamingAllowed;
@property (nonatomic) long long streamingVideoIntent;
@property (nonatomic, getter=isVideoComplementAllowed) BOOL videoComplementAllowed;
@property (nonatomic, getter=isMediumHighQualityAllowed) BOOL mediumHighQualityAllowed;
@property (nonatomic) BOOL restrictToPlayableOnCurrentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (long long)videoVersion;
- (long long)videoDeliveryMode;
- (void)encodeWithCoder:(id)a0;

@end
