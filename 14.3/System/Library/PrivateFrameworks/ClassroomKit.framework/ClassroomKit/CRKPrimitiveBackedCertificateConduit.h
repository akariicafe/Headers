@class CATOperationQueue;
@protocol CRKIDSAddressTranslator, CRKIDSPrimitives;

@interface CRKPrimitiveBackedCertificateConduit : NSObject <CRKCertificateConduit>

@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, nonatomic) id<CRKIDSAddressTranslator> addressTranslator;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;

- (void).cxx_destruct;
- (id)operationToFetchCertificateForDestinationAppleID:(id)a0 sourceAppleID:(id)a1 destinationDeviceIdentifier:(id)a2 controlGroupIdentifier:(id)a3 sourceRole:(long long)a4 destinationRole:(long long)a5 requesterCertificate:(id)a6 timeout:(double)a7;
- (id)initWithIDSPrimitives:(id)a0 addressTranslator:(id)a1 operationQueue:(id)a2;

@end
