@class NSDictionary, CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;

@interface CRKFetchClassroomConfigurationOperation : CATOperation {
    id<CRKRequestPerformingProtocol> mStudentDaemonProxy;
    NSDictionary *mSourcesByType;
    CATRemoteTaskOperation *mFetchConfigurationOperation;
}

+ (id)defaultSourcesByType;

- (void)run;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)init;
- (void).cxx_destruct;
- (void)fetchConfigurationMacOS;
- (void)fetchConfigurationOperationDidFinish:(id)a0;
- (void)fetchConfigurationiOS;
- (id)initWithStudentDaemonProxy:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 sourcesByType:(id)a1;

@end
