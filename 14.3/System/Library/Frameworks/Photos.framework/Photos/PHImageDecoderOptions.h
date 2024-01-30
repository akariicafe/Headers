@interface PHImageDecoderOptions : NSObject

@property (nonatomic) BOOL shouldLoadGainMap;
@property (nonatomic) long long maximumLongSideLength;
@property (nonatomic) long long resizeMode;
@property (nonatomic) BOOL applyOrientationTransform;
@property (nonatomic) BOOL optimizeForDrawing;
@property (nonatomic) BOOL highPriority;
@property (nonatomic) BOOL waitUntilComplete;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
