@class RTRoutineManager, GEOLocationShifter, NSObject;
@protocol OS_dispatch_queue;

@interface RTAssistantVehicleEventSearch : SALocalSearchVehicleEventSearch

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (retain, nonatomic) GEOLocationShifter *locationShifter;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
