@class NSMutableSet;

@interface MKUsageCounter : NSObject {
    NSMutableSet *_countedEventsSet;
}

+ (id)sharedCounter;

- (id)fieldNameForType:(unsigned long long)a0;
- (void)count:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)countUsageOfTypeIfNeeded:(unsigned long long)a0;
- (void)createCountedEventsSetIfNeeded;

@end
