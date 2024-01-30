@interface _TDPackerNode : NSObject

@property (nonatomic) BOOL used;
@property (retain, nonatomic) _TDPackerNode *down;
@property (retain, nonatomic) _TDPackerNode *right;
@property (nonatomic) BOOL fit;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) void *node;

- (void)dealloc;

@end
