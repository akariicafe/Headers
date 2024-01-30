@class NSString;
@protocol CRKTransportProviding, CRKFeatureDataStoreProtocol;

@interface CRKFailIfMacAndUnenrolledStudentdTransportProvider : NSObject <CRKTransportProviding>

@property (readonly, nonatomic) id<CRKTransportProviding> underlyingTransportProvider;
@property (readonly, nonatomic) id<CRKFeatureDataStoreProtocol> featureDataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
