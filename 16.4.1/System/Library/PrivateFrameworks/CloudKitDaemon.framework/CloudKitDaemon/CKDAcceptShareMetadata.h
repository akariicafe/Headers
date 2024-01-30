@class CKRecordID, NSString, NSURL, NSData;

@interface CKDAcceptShareMetadata : NSObject

@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSData *publicPCSData;
@property (retain, nonatomic) NSString *publicPCSEtag;
@property (retain, nonatomic) NSData *publicKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) NSData *pppcsProtectionInfo;
@property (retain, nonatomic) NSString *anonymousCKUserID;
@property (nonatomic) struct _PCSIdentityData { } *signingPCSIdentity;
@property (nonatomic) BOOL acceptedInProcess;

- (void)dealloc;
- (void).cxx_destruct;

@end
