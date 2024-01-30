@class MPCModelGenericAVItemTimedMetadataResponse, NSArray, MPModelGenericObject, ICStoreRequestContext;

@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest

@property (class, readonly, nonatomic) NSArray *metadataIdentifiers;

@property (retain, nonatomic) MPCModelGenericAVItemTimedMetadataResponse *previousResponse;
@property (readonly, nonatomic) MPModelGenericObject *genericObject;
@property (readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (readonly, copy, nonatomic) NSArray *timedMetadataGroups;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)initWithGenericObject:(id)a0 timedMetadataGroups:(id)a1 storeRequestContext:(id)a2;

@end
