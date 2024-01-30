@class SUScriptMediaItemCollection;

@interface SUScriptMediaPickerEvent : SUScriptObject {
    SUScriptMediaItemCollection *_collection;
}

@property (readonly) SUScriptMediaItemCollection *collection;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)initWithCollection:(id)a0;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;

@end
