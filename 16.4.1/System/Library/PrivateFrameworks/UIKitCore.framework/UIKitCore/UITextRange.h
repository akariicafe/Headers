@class UITextRangeImpl, UITextPosition;
@protocol NSObject;

@interface UITextRange : NSObject

@property (readonly, nonatomic, getter=_isCaret) BOOL isCaret;
@property (readonly, nonatomic, getter=_isRanged) BOOL isRanged;
@property (readonly, nonatomic, getter=_isImpl) UITextRangeImpl *isImpl;
@property (retain, nonatomic, getter=_attachmentRange, setter=_setAttachmentRange:) id<NSObject> _attachmentRange;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) UITextPosition *start;
@property (readonly, nonatomic) UITextPosition *end;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_asNSRangeRelativeToDocument:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_asNSRangeRelativeToDocument:(id)a0 relativeToCurrentLine:(BOOL)a1;

@end
