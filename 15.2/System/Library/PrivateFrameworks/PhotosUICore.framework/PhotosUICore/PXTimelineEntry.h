@class NSString, PXTimelineCrop, NSDate, NSURL;

@interface PXTimelineEntry : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) double relevanceScore;
@property (retain, nonatomic) PXTimelineCrop *suggestedCrop;
@property (nonatomic) unsigned long long rejectReason;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, nonatomic) NSURL *deeplink;
@property (retain, nonatomic) NSString *proactiveCriterion;

+ (id)fallbackEntryForSize:(unsigned long long)a0;
+ (id)placeholderEntry;
+ (id)descriptionForTimelineContentType:(unsigned long long)a0;
+ (id)emptyWidgetURL;
+ (id)descriptionForRejectReason:(unsigned long long)a0;

- (id)initWithFeaturedPhoto:(id)a0 andFeaturedPhotoKeyAsset:(id)a1 suggestedCrop:(id)a2;
- (id)_initWithTimelineEntry:(id)a0;
- (id)initWithFeaturedPhoto:(id)a0 andFeaturedPhotoKeyAsset:(id)a1;
- (id)description;
- (id)_initWithTitle:(id)a0 subtitle:(id)a1 localIdentifier:(id)a2 assetLocalIdentifier:(id)a3 deeplink:(id)a4 contentType:(unsigned long long)a5 relevanceScore:(double)a6 proactiveCriterion:(id)a7 suggestedCrop:(id)a8 rejectReason:(unsigned long long)a9;
- (id)initWithMemory:(id)a0 andMemoryKeyAsset:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_utcTimeFormatter;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)_localTimeFormatter;

@end
