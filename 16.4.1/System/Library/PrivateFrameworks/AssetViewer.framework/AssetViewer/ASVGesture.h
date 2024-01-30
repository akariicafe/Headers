@protocol ASVGestureDataSource;

@interface ASVGesture : NSObject

@property (weak, nonatomic) id<ASVGestureDataSource> dataSource;
@property (nonatomic) BOOL firstTouchWasOnAsset;
@property (nonatomic) void /* unknown type, empty encoding */ initialAssetLocationOnScreen;
@property (nonatomic) void /* unknown type, empty encoding */ latestAssetLocationOnScreen;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)finishGesture;
- (void)updateGesture;

@end
