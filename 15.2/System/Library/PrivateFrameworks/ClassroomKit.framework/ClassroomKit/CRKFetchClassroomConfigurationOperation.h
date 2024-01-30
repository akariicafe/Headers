@class NSDictionary, CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;

@interface CRKFetchClassroomConfigurationOperation : CATOperation {
    id<CRKRequestPerformingProtocol> mStudentDaemonProxy;
    NSDictionary *mSourcesByType;
    CATRemoteTaskOperation *mFetchConfigurationOperation;
}

+ (id)defaultSourcesByType;

- (BOOL)isAsynchronous;
- (void)run;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (id)initWithStudentDaemonProxy:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 sourcesByType:(id)a1;
- (void)fetchConfigurationiOS;
- (void)fetchConfigurationOperationDidFinish:(id)a0;
- (void)fetchConfigurationMacOS;

@end
