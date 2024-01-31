@interface AXPearlWeakObjectShell : NSObject

@property (weak, nonatomic) id weakObjectReference;
@property (weak, nonatomic) id weakSpatialProfileReference;

- (void).cxx_destruct;

@end
