@class NSString, ISDataProvider, WebScriptObject, SUXMLHTTPStoreRequestOperation, NSMutableDictionary, SSAuthenticationContext, NSDictionary, SSMutableURLRequestProperties;
@protocol SUScriptXMLHTTPStoreRequestDelegate;

@interface SUScriptXMLHTTPStoreRequest : SUScriptObject {
    NSMutableDictionary *_functions;
    SUXMLHTTPStoreRequestOperation *_operation;
    unsigned long long _readyState;
    SSMutableURLRequestProperties *_requestProperties;
    NSDictionary *_responseHeaders;
    NSString *_responseText;
    BOOL _shouldSendGUIDHeader;
    unsigned long long _status;
    NSString *_statusText;
    unsigned long long _timeout;
    BOOL _useJSONEncoding;
}

@property (weak) id<SUScriptXMLHTTPStoreRequestDelegate> delegate;
@property (retain, nonatomic) SSAuthenticationContext *authenticationContext;
@property (retain, nonatomic) ISDataProvider *dataProvider;
@property (retain, getter=isJSONEncoded) id JSONEncoded;
@property (readonly) unsigned long long readyState;
@property (readonly, copy) NSString *responseText;
@property (retain) id shouldSendGUIDHeader;
@property (readonly) unsigned long long status;
@property (readonly, copy) NSString *statusText;
@property unsigned long long timeout;
@property (retain) WebScriptObject *onabort;
@property (retain) WebScriptObject *onerror;
@property (retain) WebScriptObject *onload;
@property (retain) WebScriptObject *onloadend;
@property (retain) WebScriptObject *onreadystatechange;
@property (retain) WebScriptObject *ontimeout;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)attributeKeys;
- (id)_uniqueDeviceID;
- (void)abort;
- (id)initWithDelegate:(id)a0;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)a0;
- (void)_callFunctionWithName:(id)a0 arguments:(id)a1;
- (id)_gsTokenForAIDAAccount:(id)a0 accountStore:(id)a1;
- (id)_clientInfoHeader;
- (id)_scriptObjectForFunctionName:(id)a0;
- (void)_setScriptObject:(id)a0 forFunctionName:(id)a1;
- (void)openWithHTTPMethod:(id)a0 URL:(id)a1 isAsync:(id)a2 username:(id)a3 password:(id)a4;
- (void)sendWithBodyData:(id)a0;

@end
