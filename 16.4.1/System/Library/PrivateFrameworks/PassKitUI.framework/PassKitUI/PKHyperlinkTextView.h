@class UIColor, NSString;

@interface PKHyperlinkTextView : UITextView <UITextViewDelegate>

@property (retain, nonatomic) UIColor *linkForegroundColor;
@property (nonatomic) BOOL isLinkUnderlined;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
