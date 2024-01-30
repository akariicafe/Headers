@class NSString, NSArray, NSData, PCCKey, NSURL, CKDProtocolTranslator;
@protocol CKCodeOperationCallbacks;

@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) PCCKey *pccKey;
@property (retain, nonatomic) NSArray *pccWrappedKeys;
@property (retain, nonatomic) NSData *attestationEntropy;
@property (copy, nonatomic) NSArray *requestLocalSerializations;
@property (copy, nonatomic) NSArray *requestLocalEnvelopes;
@property (copy, nonatomic) NSData *permittedRemoteMeasurement;
@property (nonatomic) BOOL shouldSendRecordPCSKeys;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSArray *requestRecords;
@property (copy, nonatomic) NSData *serializedArguments;
@property (copy, nonatomic) NSData *serializedResponse;
@property (copy, nonatomic) NSArray *responseRecords;
@property (retain, nonatomic) CKDProtocolTranslator *translator;
@property (retain, nonatomic) id<CKCodeOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ replaceLocalSerializationsBlobs;
@property (copy, nonatomic) id /* block */ initialResponseReceivedCallback;
@property (copy, nonatomic) id /* block */ replaceWireSerializations;
@property (copy, nonatomic) id /* block */ recordFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ recordFetchProgressBlock;
@property (copy, nonatomic) id /* block */ recordFetchCommandBlock;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (int)operationType;
- (void)_preflightRecords;
- (void)_getSerializedRequest;
- (void)_invokeLocalFunction;
- (void)_invokeFunction;
- (void)_getDeserializedRecords;
- (void)_postflightRecords;

@end
