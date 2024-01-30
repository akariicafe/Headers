@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *shareMetadatasToAccept;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) id /* block */ shareAcceptedBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)zoneIDsToLock;
- (void).cxx_destruct;
- (void)addSignatureForRequestOperation:(id)a0;
- (id)initWithOperation:(id)a0 shareMetadatasToAccept:(id)a1;

@end
