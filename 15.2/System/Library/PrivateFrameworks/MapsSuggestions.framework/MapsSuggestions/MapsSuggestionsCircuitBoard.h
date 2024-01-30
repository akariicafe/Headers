@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsCircuitBoard : NSObject <MapsSuggestionsJSONable> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    struct _Config { NSArray *circuits; NSArray *triggers; NSArray *conditions; } _config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uniqueName;
- (id)addCondition:(id)a0;
- (void)awaitQueue;
- (void)disconnectCondition:(id)a0 fromCircuit:(id)a1;
- (void)connectTrigger:(id)a0 toCircuit:(id)a1;
- (id)nameForJSON;
- (id)addAction:(id)a0;
- (id)addCircuit:(id)a0;
- (void).cxx_destruct;
- (void)connectCondition:(id)a0 toCircuit:(id)a1;
- (id)init;
- (id)addTrigger:(id)a0;
- (id)objectForJSON;
- (void)disconnectTrigger:(id)a0 fromCircuit:(id)a1;
- (id).cxx_construct;

@end
