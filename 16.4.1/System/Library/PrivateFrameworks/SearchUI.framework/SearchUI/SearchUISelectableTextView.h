@interface SearchUISelectableTextView : TLKTextView

@property (nonatomic) BOOL allowsDefine;

- (void)_define:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)_canDefine;

@end
