@class UITextView, PSSpecifier, NSString, PSListController;

@interface TIAboutKeyboardPrivacyController : NSObject <UITextViewDelegate> {
    UITextView *_infoTextView;
}

@property (nonatomic) PSListController *listController;
@property (nonatomic) BOOL asHeader;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)dealloc;
- (void)aboutDonePressed;
- (void)addPrivacyLinkViewIfNecessaryToHeaderView:(id)a0 forSection:(long long)a1;
- (id)initWithGroupSpecifier:(id)a0 asHeader:(BOOL)a1 inListController:(id)a2;

@end
