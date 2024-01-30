@class UITextRangeImpl, UITextPosition;

@interface UITextRange : NSObject

@property (readonly, nonatomic, getter=_isCaret) BOOL isCaret;
@property (readonly, nonatomic, getter=_isRanged) BOOL isRanged;
@property (readonly, nonatomic, getter=_isImpl) UITextRangeImpl *isImpl;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) UITextPosition *start;
@property (readonly, nonatomic) UITextPosition *end;

@end
