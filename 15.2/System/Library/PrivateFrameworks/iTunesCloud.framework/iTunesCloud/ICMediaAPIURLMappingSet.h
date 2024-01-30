@class NSArray;

@interface ICMediaAPIURLMappingSet : NSObject {
    NSArray *_responsePayload;
}

@property (readonly, copy, nonatomic) NSArray *responsePayload;

- (void).cxx_destruct;
- (id)initWithResponsePayload:(id)a0;
- (void)enumerateMappingsUsingBlock:(id /* block */)a0;
- (id)mappingsForFeatureName:(id)a0;

@end
