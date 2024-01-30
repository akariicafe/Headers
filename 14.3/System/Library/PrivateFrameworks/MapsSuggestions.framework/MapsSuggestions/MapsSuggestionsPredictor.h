@class MapsSuggestionsSignalPackCache, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsPredictor : NSObject <MapsSuggestionsPredictor> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsSignalPackCache *_signalPackCache;
    int _tempPredictedTransportMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;

+ (id)sharedPredictor;

- (id)init;
- (void).cxx_destruct;
- (void)storeSignalPack:(id)a0 forMapItem:(id)a1 andEntry:(id)a2;
- (void)dealloc;
- (BOOL)predictedTransportModeForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (void)capturePredictedTransportationMode:(int)a0;
- (void)captureActualTransportationMode:(int)a0 originMapItem:(id)a1 destinationMapItem:(id)a2;
- (void)cancelCapturingAnalytics;
- (BOOL)predictedTransportModeForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;

@end
