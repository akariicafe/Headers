@class NSData, CKRecordID, NSString;

@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest

@property (copy, nonatomic) CKRecordID *shareRecordID;
@property (copy, nonatomic) NSData *encryptedKey;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSString *baseToken;
@property (copy, nonatomic) id /* block */ vettingInitiationRequestCompletionBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 shareRecordID:(id)a1 encryptedKey:(id)a2 participantID:(id)a3 baseToken:(id)a4;

@end
