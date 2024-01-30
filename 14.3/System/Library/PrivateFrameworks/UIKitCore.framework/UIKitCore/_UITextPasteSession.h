@class UITextPasteController, NSArray, UITextPasteCoordinator, NSString, UITextRange, NSAttributedString;
@protocol UITextPasteSessionDelegate, _UITextPasteProgressSupport;

@interface _UITextPasteSession : NSObject <UITextDropPasteSession>

@property (weak, nonatomic) UITextPasteController *controller;
@property (retain, nonatomic) UITextPasteCoordinator *coordinator;
@property (retain, nonatomic) UITextRange *range;
@property (retain, nonatomic) id<_UITextPasteProgressSupport> progressSupport;
@property (retain, nonatomic) NSAttributedString *pasteResult;
@property (copy, nonatomic) NSArray *originalItems;
@property (retain, nonatomic) UITextRange *hiddenRange;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (weak, nonatomic) id<UITextPasteSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
