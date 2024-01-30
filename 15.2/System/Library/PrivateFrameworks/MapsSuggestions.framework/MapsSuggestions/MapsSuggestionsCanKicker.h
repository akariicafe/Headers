@class NSString, MapsSuggestionsGCDTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsCanKicker : NSObject <MapsSuggestionsObject> {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_name;
    id /* block */ _block;
    double _time;
    double _leeway;
    MapsSuggestionsGCDTimer *_timer;
    unsigned long long _count;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)kickCanBySameTime;
- (id)initWithName:(id)a0 time:(double)a1 leeway:(double)a2 queue:(id)a3 block:(id /* block */)a4;
- (id)initWithName:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 time:(double)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)dealloc;
- (void)kickCanByTime:(double)a0;
- (void)cancel;

@end
