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

- (void)awaitQueue;
- (id)addAction:(id)a0;
- (void)connectTrigger:(id)a0 toCircuit:(id)a1;
- (id)addTrigger:(id)a0;
- (id)addCondition:(id)a0;
- (id).cxx_construct;
- (void)connectCondition:(id)a0 toCircuit:(id)a1;
- (id)uniqueName;
- (id)objectForJSON;
- (id)nameForJSON;
- (void)disconnectTrigger:(id)a0 fromCircuit:(id)a1;
- (id)addCircuit:(id)a0;
- (void)disconnectCondition:(id)a0 fromCircuit:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
