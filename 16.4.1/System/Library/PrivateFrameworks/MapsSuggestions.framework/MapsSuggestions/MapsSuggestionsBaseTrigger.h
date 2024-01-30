@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBaseTrigger : NSObject <MapsSuggestionsTrigger> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    MapsSuggestionsObservers *_observers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 queue:(id)a1;
- (void)didAddFirstObserver;
- (id)initWithName:(id)a0;
- (id)objectForJSON;
- (BOOL)hasObservers;
- (id)nameForJSON;
- (id)dispatchQueue;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)didRemoveLastObserver;
- (void).cxx_destruct;
- (void)triggerMyObservers;

@end
