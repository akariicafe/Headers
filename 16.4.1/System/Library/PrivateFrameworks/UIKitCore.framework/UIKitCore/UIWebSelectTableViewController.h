@class NSArray, UIWebSelectPopover, NSString, UITextInputPasswordRules, DOMHTMLSelectElement;

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    BOOL _allowsMultipleSelection;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
}

@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode;
@property (retain, nonatomic) NSArray *_groupsAndOptions;
@property (retain, nonatomic) NSArray *_cachedItems;
@property (nonatomic) UIWebSelectPopover *_popover;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isEmpty;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)insertText:(id)a0;
- (void)dealloc;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)deleteBackward;
- (void)viewWillAppear:(BOOL)a0;
- (id)_optionsForSection:(long long)a0;
- (void)_setupGroupsAndOptions;
- (id)initWithDOMHTMLSelectNode:(id)a0 cachedItems:(id)a1 singleSelectionIndex:(unsigned long long)a2 multipleSelection:(BOOL)a3;

@end
