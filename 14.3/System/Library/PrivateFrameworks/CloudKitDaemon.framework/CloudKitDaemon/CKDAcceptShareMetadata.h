@class CKRecordID, NSString, NSURL, NSData;

@interface CKDAcceptShareMetadata : NSObject

@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSData *publicPCSData;
@property (retain, nonatomic) NSString *publicPCSEtag;
@property (retain, nonatomic) NSData *publicKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (retain, nonatomic) NSData *oonProtectionInfo;
@property (retain, nonatomic) NSString *oonParticipantID;
@property (retain, nonatomic) NSData *dugongInvitationProtectionInfo;
@property (nonatomic) BOOL acceptedInProcess;

- (void).cxx_destruct;

@end
