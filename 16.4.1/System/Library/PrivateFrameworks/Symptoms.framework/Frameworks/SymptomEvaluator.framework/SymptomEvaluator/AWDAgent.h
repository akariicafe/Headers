@class AWDServerConnection, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface AWDAgent : NSObject {
    BOOL _isHelper;
    id dropboxObserver;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) AWDServerConnection *symptomsAWDConnection;
@property (retain) AWDServerConnection *libnetcoreAWDConnection;
@property (retain) AWDServerConnection *cfnetworkAWDConnection;
@property (retain, nonatomic) NSSet *awdSymptomsConfiguredMetricIds;
@property (retain, nonatomic) NSSet *awdLibnetcoreConfiguredMetricIds;
@property (retain, nonatomic) NSSet *awdCFNetworkConfiguredMetricIds;

+ (id)defaultInstance;

- (BOOL)shouldSendMetric:(unsigned int)a0;
- (void)postMetricForSignificantEventWithName:(id)a0 errorContext:(int)a1 error:(id)a2 status:(int)a3;
- (void)_handleQuery:(unsigned int)a0;
- (void)postMetric:(id)a0 withIdentifier:(unsigned int)a1 libnetcore:(BOOL)a2;
- (void)dealloc;
- (void)postMetric:(id)a0 withIdentifier:(unsigned int)a1;
- (void)postMetricForSignificantEvent:(int)a0 errorContext:(int)a1 error:(id)a2 status:(int)a3;
- (void)bulkPostMetrics:(id)a0 withIdentifier:(unsigned int)a1 libnetcore:(BOOL)a2;
- (id)init;
- (BOOL)overridePostMetricConfig;
- (void)_postMetricForSignificantEvent:(int)a0 orEventName:(id)a1 errorContext:(int)a2 error:(id)a3 status:(int)a4;
- (void).cxx_destruct;

@end
