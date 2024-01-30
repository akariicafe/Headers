@class NSObject, TRIClientBackgroundMLTask, NSString, MLRBMLTSchedulingPolicy, TRIClient, DESRecordSet, TRIFactorsState;
@protocol OS_dispatch_queue;

@interface MLRInternalBMLTTask : NSObject <MLRInternalTaskRepresenting, NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIFactorsState *factorsState;
@property (readonly, nonatomic) MLRBMLTSchedulingPolicy *policy;
@property (readonly, nonatomic) DESRecordSet *recordSet;
@property (readonly, nonatomic) TRIClientBackgroundMLTask *triBMLT;
@property (readonly, nonatomic) TRIClient *triClient;
@property (readonly, copy, nonatomic) NSString *pluginID;
@property (readonly, copy, nonatomic) NSString *taskID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)MLRSandboxExtensionRequests;
- (id)MLRTaskWithError:(id *)a0;
- (id)attachmentsDirURL;
- (BOOL)downloadFactorsSynchronouslyWithError:(id *)a0;
- (BOOL)evaluateTargetingExpressionForPlugin:(id)a0 error:(id *)a1;
- (BOOL)evaluateTargetingExpressionWithParameters:(id)a0 error:(id *)a1;
- (BOOL)fetchDataIfNecessaryWithError:(id *)a0;
- (id)initWithTRIClientBackgroundMLTask:(id)a0 factorsState:(id)a1;
- (id)initWithTRIClientBackgroundMLTask:(id)a0 factorsState:(id)a1 recordSet:(id)a2;
- (id)performOnPlugin:(id)a0 error:(id *)a1;
- (id)recipeURL;
- (id)submissionServer;
- (BOOL)submitTask:(id)a0 result:(id)a1 duration:(double)a2 errorToBeSubmitted:(id)a3 error:(id *)a4;
- (id)taskAttachmentsWithError:(id *)a0;
- (id)taskParametersWithError:(id *)a0;

@end
