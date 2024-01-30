@class NSString, AFSiriRequest, NSXPCListenerEndpoint;

@interface AFSiriTask : NSObject <NSSecureCoding, BSXPCCoding> {
    AFSiriRequest *_request;
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
    NSXPCListenerEndpoint *_usageResultListenerEndpoint;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)request;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)dealloc;
- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (void)completeWithResponse:(id)a0;
- (id)_initWithRequest:(id)a0 remoteResponseListenerEndpoint:(id)a1 usageResultListenerEndpoint:(id)a2;
- (void)_invalidateConnectionAfterMessageSent:(id)a0;
- (id)_responseHandlerConnection;
- (id)_usageResultHandlerConnection;
- (void)reportUsageResult:(id)a0;

@end
