@class SUScriptMediaItemCollection;

@interface SUScriptMediaPickerEvent : SUScriptObject {
    SUScriptMediaItemCollection *_collection;
}

@property (readonly) SUScriptMediaItemCollection *collection;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)initWithCollection:(id)a0;
- (id)attributeKeys;
- (void)dealloc;
- (id)scriptAttributeKeys;

@end
