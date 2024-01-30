@class NSString, PSSpecifier, OBWelcomeController, UILabel, NSMutableArray;

@interface AXUISettingsInstructionsView : UITableViewHeaderFooterView <UITextViewDelegate, PSHeaderFooterView> {
    PSSpecifier *_specifier;
    UILabel *_headerLabel;
    NSMutableArray *_contentLabels;
    NSMutableArray *_marginConstraints;
}

@property (retain, nonatomic) OBWelcomeController *moreInfoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsLayout;
- (void)doneButtonTapped:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)_initializeContent;
- (id)settingsLocString:(id)a0 table:(id)a1;

@end
