@class NSDictionary, NSMutableDictionary;

@interface CKDPAnonymousShareAddURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

- (BOOL)requiresCKAnonymousUserIDs;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 encryptedAnonymousSharesToAdd:(id)a1;

@end
