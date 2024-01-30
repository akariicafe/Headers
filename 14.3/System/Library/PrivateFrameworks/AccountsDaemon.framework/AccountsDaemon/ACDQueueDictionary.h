@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject {
    NSMutableDictionary *_allQueuesByID;
}

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isQueueEmptyForKey:(id)a0;
- (void)addObject:(id)a0 toQueueForKey:(id)a1;
- (id)dequeueFirstObjectInQueueForKey:(id)a0;
- (id)firstObjectInQueueForKey:(id)a0;
- (id)dequeueAllObjectsInQueueForKey:(id)a0;
- (id)keyForRandomQueue;

@end
