@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsGCDTimer : MapsSuggestionsBaseTrigger <MapsSuggestionsTimer> {
    struct Timer { struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue; NSString *_name; NSObject<OS_dispatch_source> *_timer; struct { NSDate *firesAt; } _state; } _timer;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddFirstObserver;
- (void)scheduleWithTimeInterval:(double)a0 leeway:(double)a1;
- (void)unschedule;
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a0 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a1;
- (void)scheduleWithTimeInterval:(double)a0 repeatAfter:(double)a1 leeway:(double)a2;
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a0 repeatAfter:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a1 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a2;
- (id)initWithName:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)objectForJSON;
- (void)dealloc;
- (id).cxx_construct;
- (void)didRemoveLastObserver;

@end
