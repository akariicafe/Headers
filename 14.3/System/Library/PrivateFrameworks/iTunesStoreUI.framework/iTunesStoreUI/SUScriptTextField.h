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

- (BOOL)blur;
- (BOOL)focus;
- (id)init;
- (void)dealloc;
- (id)attributeKeys;
- (id)_keyboardType;
- (id)buttonItem;
- (double)_defaultWidth;
- (id)_autocapitalizationType;
- (id)_autocorrectionType;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)initWithTextFieldStyle:(id)a0;
- (BOOL)_styleIsValid:(id)a0;
- (id)_boxedNativeTextField;
- (id)_copyPlaceholder;
- (id)_copyValue;
- (id)_newTextField;
- (void)setNativeObjectWithBarButtonItem:(id)a0;
- (void)setNativeObjectWithSearchBar:(id)a0;
- (void)setNativeObjectWithTextField:(id)a0;

@end
