@class NSString, SSLookupRequest;

@interface SUScriptLookupRequest : SUScriptObject {
    SSLookupRequest *_request;
}

@property (retain) id authenticatesIfNeeded;
@property (copy) NSString *keyProfile;
@property long long localizationStyle;
@property (readonly) long long localizationStyleDevice;
@property (readonly) long long localizationStyleServer;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (id)valueForRequestParameter:(id)a0;
- (void)dealloc;
- (id)attributeKeys;
- (id)_className;
- (void)setValue:(id)a0 forRequestParameter:(id)a1;
- (id)scriptAttributeKeys;
- (void)startWithLookupFunction:(id)a0;

@end
