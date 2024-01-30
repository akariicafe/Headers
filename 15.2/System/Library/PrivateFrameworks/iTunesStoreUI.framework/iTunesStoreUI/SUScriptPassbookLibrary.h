@class NSArray, PKPassLibrary;

@interface SUScriptPassbookLibrary : SUScriptObject {
    PKPassLibrary *_passLibrary;
}

@property (readonly) NSArray *passes;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)initWithPassLibrary:(id)a0;
- (id)attributeKeys;
- (void)dealloc;
- (id)passWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (id)scriptAttributeKeys;

@end
