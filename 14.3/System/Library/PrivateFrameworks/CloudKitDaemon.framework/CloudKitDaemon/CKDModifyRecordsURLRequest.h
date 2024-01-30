@class NSArray, NSDictionary, NSData, NSMutableDictionary;

@interface CKDModifyRecordsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic) BOOL oplock;
@property (nonatomic) BOOL sendAllFields;
@property (retain, nonatomic) NSData *clientChangeTokenData;
@property (retain, nonatomic) NSDictionary *requestedFieldsByRecordID;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID;
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic) BOOL atomic;
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken;
@property (retain, nonatomic) NSArray *userPublicKeys;
@property (copy, nonatomic) id /* block */ recordPostedBlock;

- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (int)isolationLevel;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)zoneIDsToLock;
- (id)requestOperationClasses;
- (id)initWithOperation:(id)a0 recordsToSave:(id)a1 recordIDsToDelete:(id)a2 oplock:(BOOL)a3 sendAllFields:(BOOL)a4 clientChangeTokenData:(id)a5 requestedFieldsByRecordId:(id)a6;

@end
