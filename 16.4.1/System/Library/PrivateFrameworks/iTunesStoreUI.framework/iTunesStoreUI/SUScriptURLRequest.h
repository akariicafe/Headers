@class NSNumber, NSString, SSMutableURLRequestProperties;

@interface SUScriptURLRequest : SUScriptObject {
    SSMutableURLRequestProperties *_requestProperties;
}

@property (copy) NSNumber *timeoutInterval;
@property (copy) NSString *URLBagKey;
@property (copy) id URLs;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)init;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)copyNativeRequestProperties;
- (id)initWithNativeRequestProperties:(id)a0;

@end
