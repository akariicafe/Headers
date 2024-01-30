@class NSArray;

@interface NMSStoreModelLookupRequest : MPStoreModelRequest

@property (copy, nonatomic) NSArray *containerIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
