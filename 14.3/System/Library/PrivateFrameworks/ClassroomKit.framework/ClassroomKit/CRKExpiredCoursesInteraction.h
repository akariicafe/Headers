@class NSSet, CATRemoteTaskOperation;
@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKExpiredCoursesInteraction : CATOperation {
    CATRemoteTaskOperation *mLeaveControlGroupsOperation;
    BOOL mIsPrompting;
}

@property (readonly, nonatomic) id<CRKExpiredCoursesInteractionDelegate> delegate;
@property (readonly, nonatomic) id<CRKRequestPerformingProtocol> studentDaemonProxy;
@property (readonly, nonatomic) NSSet *courses;

+ (id)new;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)removeCourses:(id)a0;
- (void)leaveControlGroupsOperationDidFinish:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 delegate:(id)a1 courses:(id)a2;

@end
