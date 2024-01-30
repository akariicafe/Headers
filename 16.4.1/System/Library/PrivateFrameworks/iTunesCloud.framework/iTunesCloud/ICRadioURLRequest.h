@class NSNumber;

@interface ICRadioURLRequest : ICStoreURLRequest

@property (nonatomic, getter=isBackgroundRadioRequest) BOOL backgroundRadioRequest;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic, getter=isDelegatedPrivateListeningEnabled) NSNumber *delegatedPrivateListeningEnabled;
@property (nonatomic) long long protocolVersion;
@property (copy, nonatomic) id /* block */ radioContentDictionaryCreationBlock;

- (id)initWithURLRequest:(id)a0 requestContext:(id)a1;
- (void).cxx_destruct;
- (void)_decorateHeaderPropertiesForURLRequest:(id)a0 withBuilderProperties:(id)a1;
- (void)buildStoreURLRequestWithURLRequest:(id)a0 builderProperties:(id)a1 completionHandler:(id /* block */)a2;

@end
