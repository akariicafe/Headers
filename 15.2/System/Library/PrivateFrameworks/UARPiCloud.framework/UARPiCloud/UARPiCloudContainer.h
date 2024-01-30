@class CKDatabase, NSString, NSDictionary, NSData, CKServerChangeToken, NSMutableSet, CKContainer;

@interface UARPiCloudContainer : NSObject

@property (readonly) CKContainer *container;
@property (readonly, copy) NSString *containerID;
@property (readonly) CKDatabase *database;
@property (copy) NSData *verificationCertificate;
@property (copy) NSDictionary *verificationCertificates;
@property (retain) id publicKey;
@property (copy) CKServerChangeToken *databaseChangeToken;
@property (copy) NSMutableSet *updatedZones;
@property (copy) NSMutableSet *updatedRecords;

- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (void)createContainerWithIdentifier:(id)a0;
- (BOOL)isCHIPContainer;
- (BOOL)requiresPrefForSigningBeta;
- (void)processVerificationCertificateRecord:(id)a0;

@end
