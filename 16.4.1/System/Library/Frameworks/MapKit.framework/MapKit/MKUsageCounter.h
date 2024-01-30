@class NSMutableSet;

@interface MKUsageCounter : NSObject {
    NSMutableSet *_countedEventsSet;
}

+ (id)sharedCounter;

- (void)countUsageOfTypeIfNeeded:(unsigned long long)a0;
- (void)count:(unsigned long long)a0;
- (id)fieldNameForType:(unsigned long long)a0;
- (void)createCountedEventsSetIfNeeded;
- (void).cxx_destruct;

@end
