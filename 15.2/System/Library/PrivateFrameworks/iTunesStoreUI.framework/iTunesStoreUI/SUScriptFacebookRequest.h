@class SUScriptAppleAccount, NSURL, SLRequest;

@interface SUScriptFacebookRequest : SUScriptObject {
    SLRequest *_request;
    long long _requestMethod;
    SUScriptAppleAccount *_scriptAccount;
    NSURL *_url;
}

@property (retain) SUScriptAppleAccount *account;
@property (readonly) long long requestMethod;
@property (readonly, copy) NSURL *URL;
@property (readonly) long long requestMethodDelete;
@property (readonly) long long requestMethodGet;
@property (readonly) long long requestMethodPost;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)setParameters:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)scriptAttributeKeys;
- (BOOL)_isRequestAllowed:(id *)a0;
- (void)_performRequest:(id)a0 withScriptFunction:(id)a1;
- (void)addMultiPartData:(id)a0 withName:(id)a1 type:(id)a2;
- (void)addParameterWithKey:(id)a0 value:(id)a1;
- (void)performRequestWithFunction:(id)a0;
- (id)initWithURL:(id)a0 requestMethod:(id)a1;

@end
