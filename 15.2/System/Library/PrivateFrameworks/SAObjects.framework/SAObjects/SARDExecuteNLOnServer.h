@class NSArray, NSString, SASRecognition, NSDictionary;

@interface SARDExecuteNLOnServer : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *aceDelegatedUserDialogActList;
@property (copy, nonatomic) NSString *directAction;
@property (retain, nonatomic) SASRecognition *recognitionSausage;
@property (copy, nonatomic) NSDictionary *requestExecutionParameters;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
