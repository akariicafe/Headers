@class WebVisiblePosition;

@interface UITextPositionImpl : UITextPosition

@property (retain, nonatomic) WebVisiblePosition *webVisiblePosition;

+ (id)wrapWebVisiblePosition:(id)a0;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
