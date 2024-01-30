@class NSArray, NSString;

@interface SUScriptMediaPickerController : SUScriptViewController

@property BOOL allowsPickingMultipleItems;
@property (readonly) NSArray *mediaTypes;
@property (retain) NSString *prompt;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)attributeKeys;
- (id)initWithMediaTypes:(id)a0;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setNativeViewController:(id)a0;
- (id)newNativeViewController;

@end
