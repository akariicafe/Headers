@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ResponseConfigPayload : NEIKEv2ConfigPayload

@property (retain) NEIKEv2ConfigurationMessage *configurationRequest;

- (void).cxx_destruct;
- (BOOL)parsePayloadData;
- (id)initWithResponseConfigPayload:(id)a0 configRequest:(id)a1;

@end
