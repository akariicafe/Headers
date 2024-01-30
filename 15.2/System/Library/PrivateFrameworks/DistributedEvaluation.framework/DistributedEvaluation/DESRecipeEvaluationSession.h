@class NSData, NSString, NSError, NSArray, NSDate, DESRecipe, NSDictionary, NSURL, NSObject, DESRecordSet;
@protocol OS_xpc_object;

@interface DESRecipeEvaluationSession : NSObject {
    NSDate *_startDate;
    NSURL *_baseURL;
    NSString *_localeIdentifier;
    NSDate *_deadline;
    NSDate *_deferralDate;
    NSArray *_attachmentsToDelete;
    double _resumeTimestamp;
    Class _protocolClass;
    BOOL _wasResumedFromURL;
}

@property (nonatomic) BOOL requestToDeferByDAS;
@property (readonly, nonatomic) long long evaluationResult;
@property (readonly, copy, nonatomic) NSDictionary *JSONResult;
@property (readonly, copy, nonatomic) NSData *binaryResult;
@property (readonly, copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *testingRecipePath;
@property (copy, nonatomic) NSArray *testingRecipeAttachments;
@property (copy, nonatomic) id /* block */ testingCompletionHandler;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) DESRecipe *recipe;
@property (readonly, nonatomic) DESRecordSet *matchingRecordSet;

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)taskIsDeferred;
- (void)completeWithJSONResult:(id)a0 binaryResult:(id)a1 completionHandler:(id /* block */)a2;
- (id)_initWithDodMLTask:(id)a0;
- (id)deferralURL;
- (void)_deleteDownloadedAttachments;
- (id)_initWithResumptionURL:(id)a0 recordSet:(id)a1 protocolClass:(Class)a2 error:(id *)a3;
- (void)sendRecipeResponseWithDuration:(double)a0 evaluationError:(id)a1 completion:(id /* block */)a2;
- (void)_postResultsToServerIfNeededWithCompletionHandler:(id /* block */)a0;
- (id)initWithResumptionURL:(id)a0 error:(id *)a1;
- (void)downloadAttachmentsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)completeWithError:(id)a0 completionHandler:(id /* block */)a1;
- (id)deferWithDeadline:(id)a0 error:(id *)a1;

@end
