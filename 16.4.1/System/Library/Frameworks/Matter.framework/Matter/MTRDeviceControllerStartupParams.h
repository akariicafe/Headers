@class NSNumber, NSData, NSObject;
@protocol MTROperationalCertificateIssuer, OS_dispatch_queue, MTRKeypair;

@interface MTRDeviceControllerStartupParams : NSObject

@property (readonly, nonatomic) unsigned long long fabricId;
@property (copy, nonatomic) NSNumber *vendorId;
@property (copy, nonatomic) NSNumber *nodeId;
@property (copy, nonatomic) NSData *operationalCertificate;
@property (readonly, copy, nonatomic) id<MTRKeypair> nocSigner;
@property (readonly, copy, nonatomic) NSNumber *fabricID;
@property (readonly, copy, nonatomic) NSData *ipk;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSData *rootCertificate;
@property (copy, nonatomic) NSData *intermediateCertificate;
@property (retain, nonatomic) id<MTRKeypair> operationalKeypair;
@property (retain, nonatomic) id<MTROperationalCertificateIssuer> operationalCertificateIssuer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationalCertificateIssuerQueue;

- (id)initWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithIPK:(id)a0 fabricID:(id)a1 nocSigner:(id)a2;
- (id)initWithIPK:(id)a0 operationalKeypair:(id)a1 operationalCertificate:(id)a2 intermediateCertificate:(id)a3 rootCertificate:(id)a4;
- (id)initWithOperationalKeypair:(id)a0 operationalCertificate:(id)a1 intermediateCertificate:(id)a2 rootCertificate:(id)a3 ipk:(id)a4;
- (id)initWithSigningKeypair:(id)a0 fabricId:(unsigned long long)a1 ipk:(id)a2;

@end
