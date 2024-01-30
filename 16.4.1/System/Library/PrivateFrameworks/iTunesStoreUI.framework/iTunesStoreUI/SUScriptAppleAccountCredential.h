@class NSString, ACAccountCredential;

@interface SUScriptAppleAccountCredential : SUScriptObject {
    ACAccountCredential *_credential;
}

@property (readonly) NSString *oauthToken;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithACAccountCredential:(id)a0;

@end
