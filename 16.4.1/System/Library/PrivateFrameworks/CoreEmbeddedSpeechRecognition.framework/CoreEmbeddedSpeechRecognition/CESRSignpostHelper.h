@class NSMutableDictionary;

@interface CESRSignpostHelper : NSObject {
    NSMutableDictionary *_eventNameToId;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)fetchAndDestroySignpostIdForEventName:(id)a0;
- (void)storeSignpostId:(unsigned long long)a0 forEventName:(id)a1;

@end
