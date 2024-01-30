@class NSArray;

@interface NMSStoreModelLookupRequest : MPStoreModelRequest

@property (copy, nonatomic) NSArray *containerIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
