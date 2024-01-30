@class NSString, NSMutableOrderedSet, ODISession, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PKODIAssessment : NSObject {
    NSString *_assessment;
    BOOL _currentAssessmentDidTimeout;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableOrderedSet *_assessmentComputedBlocks;
    BOOL _computingAssessment;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _isAssessing;
}

@property (retain, nonatomic) ODISession *odiSession;

- (id)init;
- (void).cxx_destruct;
- (void)startAssessment;
- (void)_callAssessmentComputedBlocksAndDidTimeout:(BOOL)a0;
- (void)computeAssessment;
- (void)createODISession;
- (id)currentAssessment;
- (BOOL)currentAssessmentDidTimeout;
- (void)getAssessmentWithCompletion:(id /* block */)a0;
- (BOOL)isAssessing;
- (void)provideSessionFeedback:(unsigned long long)a0;
- (void)startAssessmentWithHostBundleIdentifier:(id)a0;
- (void)updateAssessment:(id)a0;
- (void)updateAssessmentWithHostBundleIdentifier:(id)a0;
- (void)updateAssessmentWithModel:(id)a0;
- (void)waitForAssessmentWithContinueBlock:(id /* block */)a0;

@end
