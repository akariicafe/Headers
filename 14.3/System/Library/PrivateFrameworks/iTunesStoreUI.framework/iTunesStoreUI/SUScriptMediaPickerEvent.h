@class SUScriptMediaItemCollection;

@interface SUScriptMediaPickerEvent : SUScriptObject {
    SUScriptMediaItemCollection *_collection;
}

@property (readonly) SUScriptMediaItemCollection *collection;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)attributeKeys;
- (id)initWithCollection:(id)a0;
- (id)_className;
- (id)scriptAttributeKeys;

@end
