@interface CKAVMediaObject : CKMediaObject

@property (nonatomic) BOOL durationLoaded;
@property (nonatomic) double duration;

+ (id)durationCache;

- (id)description;

@end
