@class NSDictionary, CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;

@interface CRKFetchClassroomConfigurationOperation : CATOperation {
    id<CRKRequestPerformingProtocol> mStudentDaemonProxy;
    NSDictionary *mSourcesByType;
    CATRemoteTaskOperation *mFetchConfigurationOperation;
}

+ (id)defaultSourcesByType;

- (void)cancel;
- (void)run;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithStudentDaemonProxy:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 sourcesByType:(id)a1;
- (void)fetchConfigurationiOS;
- (void)fetchConfigurationOperationDidFinish:(id)a0;
- (void)fetchConfigurationMacOS;

@end
