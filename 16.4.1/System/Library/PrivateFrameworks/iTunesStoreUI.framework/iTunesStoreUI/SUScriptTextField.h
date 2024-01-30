@class NSString, SUScriptFunction, WebScriptObject, NSNumber;

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem> {
    SUScriptFunction *_shouldFocusFunction;
    NSString *_style;
}

@property (readonly, nonatomic) BOOL canBecomeFirstResponder;
@property (retain) NSString *autocapitalizationType;
@property (retain) NSString *autocorrectionType;
@property (retain) NSString *keyboardType;
@property (retain) NSString *placeholder;
@property (retain) WebScriptObject *shouldFocusFunction;
@property (readonly) NSString *style;
@property (retain) NSString *value;
@property (retain) NSNumber *width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (double)_defaultWidth;
- (id)buttonItem;
- (void)dealloc;
- (id)init;
- (BOOL)focus;
- (BOOL)blur;
- (id)_keyboardType;
- (id)_className;
- (id)attributeKeys;
- (id)_autocapitalizationType;
- (id)_autocorrectionType;
- (id)scriptAttributeKeys;
- (id)_boxedNativeTextField;
- (id)_copyPlaceholder;
- (id)_copyValue;
- (id)_newTextField;
- (BOOL)_styleIsValid:(id)a0;
- (id)initWithTextFieldStyle:(id)a0;
- (void)setNativeObjectWithBarButtonItem:(id)a0;
- (void)setNativeObjectWithSearchBar:(id)a0;
- (void)setNativeObjectWithTextField:(id)a0;

@end
