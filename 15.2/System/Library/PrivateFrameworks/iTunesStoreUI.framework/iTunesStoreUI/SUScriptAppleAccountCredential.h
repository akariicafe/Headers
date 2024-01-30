@class NSString, ACAccountCredential;

@interface SUScriptAppleAccountCredential : SUScriptObject {
    ACAccountCredential *_credential;
}

@property (readonly) NSString *oauthToken;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)scriptAttributeKeys;
- (id)initWithACAccountCredential:(id)a0;

@end
