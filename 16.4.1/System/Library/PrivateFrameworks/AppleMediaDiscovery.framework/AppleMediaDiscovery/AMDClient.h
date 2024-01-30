@class NSString;

@interface AMDClient : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSString *dsId;

- (id)getFeature:(id)a0;
- (void).cxx_destruct;
- (id)getFeatureStub:(id)a0;
- (id)appSegmentData:(id)a0 completion:(id /* block */)a1;
- (void)callIAESegmentNotificationHandler;
- (void)clearDataForDSID:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppSegments:(id)a0 completion:(id /* block */)a1;
- (void)getAppSegmentDataWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)getModelPath:(id)a0 error:(id *)a1;
- (id)getModelPathForUsecase:(id)a0 withTreatmentId:(id)a1 inDomain:(id)a2 error:(id *)a3;
- (id)getMusicModelPathForUsecase:(id)a0 withTreatmentId:(id)a1 error:(id *)a2;
- (void)iaeSegmentNotificationHandler:(id)a0;
- (id)sendPIRData:(id)a0 forKeyword:(id)a1 withCallHandle:(id)a2 error:(id *)a3;
- (void)subscribeToSegmentNotificationWithCallback:(id /* block */)a0 forAccountDSID:(id)a1;
- (void)unsubscribeFromSegmentNotification;

@end
