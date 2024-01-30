@class UIResponder;

@interface TeaUI.WindowScene : UIWindowScene

@property (nonatomic, readonly) UIResponder *nextResponder;

- (id)initWithSession:(id)a0 connectionOptions:(id)a1;

@end
