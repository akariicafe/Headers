@class NSMutableSet;

@interface MKUsageCounter : NSObject {
    NSMutableSet *_countedEventsSet;
}

+ (id)sharedCounter;

- (void)createCountedEventsSetIfNeeded;
- (void).cxx_destruct;
- (id)fieldNameForType:(unsigned long long)a0;
- (void)count:(unsigned long long)a0;
- (void)countUsageOfTypeIfNeeded:(unsigned long long)a0;

@end
