@class NSString, NSNumber;

@interface SUScriptDialog : SUScriptObject {
    NSString *_body;
    id _buttons;
    NSNumber *_cancelButtonIndex;
    NSNumber *_destructiveButtonIndex;
    id _textFields;
    NSString *_title;
}

@property (retain) NSString *body;
@property (retain) id buttons;
@property (retain) NSNumber *cancelButtonIndex;
@property (retain) NSNumber *destructiveButtonIndex;
@property (retain) id textFields;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dismiss;
- (id)_className;
- (id)attributeKeys;
- (void)show;
- (void)dealloc;
- (id)scriptAttributeKeys;
- (id)_nativeDialog;
- (void)_logSheetWarnings;
- (void)showSheet;
- (void)showFromDOMElement:(id)a0;
- (void)showSheetInPopOver:(id)a0;

@end
