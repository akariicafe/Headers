@class WebVisiblePosition;

@interface UITextPositionImpl : UITextPosition

@property (retain, nonatomic) WebVisiblePosition *webVisiblePosition;

+ (id)wrapWebVisiblePosition:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
