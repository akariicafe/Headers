@class NSString;

@interface AMDClient : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSString *dsId;

- (void).cxx_destruct;
- (id)getFeatureStub:(id)a0;
- (id)getFeature:(id)a0;
- (void)iaeSegmentNotificationHandler:(id)a0;
- (void)clearDataForDSID:(id)a0 completion:(id /* block */)a1;
- (void)getAppSegmentDataWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)appSegmentData:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppSegments:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToSegmentNotificationWithCallback:(id /* block */)a0 forAccountDSID:(id)a1;
- (void)unsubscribeFromSegmentNotification;
- (void)callIAESegmentNotificationHandler;

@end
