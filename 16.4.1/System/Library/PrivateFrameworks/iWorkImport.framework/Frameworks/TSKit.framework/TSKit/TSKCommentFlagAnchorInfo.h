@interface TSKCommentFlagAnchorInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } leftAnchor;
@property (nonatomic) struct CGPoint { double x; double y; } rightAnchor;
@property (nonatomic) BOOL isVertical;

- (id)initWithLeftAnchor:(struct CGPoint { double x0; double x1; })a0 rightAnchor:(struct CGPoint { double x0; double x1; })a1 isVertical:(BOOL)a2;

@end
