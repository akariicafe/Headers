@class NSMutableSet, HDHealthRecordsProfileExtension, HDProfile, NSString, HDHealthRecordsXPCServiceClient, NSOperation, HDClinicalIngestionTask;

@interface HDClinicalIngestionOperation : NSOperation {
    NSOperation *_nextOperation;
    NSMutableSet *_cancellingDependencies;
    NSMutableSet *_groupCancellingDependencies;
}

@property (readonly) HDClinicalIngestionTask *task;
@property (readonly) NSOperation *nextOperation;
@property (readonly) HDProfile *profile;
@property (readonly) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HDHealthRecordsXPCServiceClient *healthRecordsServiceClient;

- (void).cxx_destruct;
- (void)main;
- (id)initWithTask:(id)a0 nextOperation:(id)a1;

@end
