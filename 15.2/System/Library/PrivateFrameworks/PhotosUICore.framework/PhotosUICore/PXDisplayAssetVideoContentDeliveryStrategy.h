@class NSString;

@interface PXDisplayAssetVideoContentDeliveryStrategy : NSObject <NSCopying>

@property (nonatomic) long long quality;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } segmentTimeRange;
@property (nonatomic) BOOL isStreamingAllowed;
@property (nonatomic) BOOL isNetworkAccessAllowed;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isAudioAllowed;

+ (id)defaultStreamingMediumQualityStrategy;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
