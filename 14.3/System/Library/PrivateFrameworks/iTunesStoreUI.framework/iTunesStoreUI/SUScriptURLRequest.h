@class NSNumber, NSString, SSMutableURLRequestProperties;

@interface SUScriptURLRequest : SUScriptObject {
    SSMutableURLRequestProperties *_requestProperties;
}

@property (copy) NSNumber *timeoutInterval;
@property (copy) NSString *URLBagKey;
@property (copy) id URLs;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)initWithNativeRequestProperties:(id)a0;
- (id)copyNativeRequestProperties;

@end
