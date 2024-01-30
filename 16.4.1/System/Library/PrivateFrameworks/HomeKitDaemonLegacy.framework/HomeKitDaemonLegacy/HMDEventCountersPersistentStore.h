@interface HMDEventCountersPersistentStore : NSObject <HMDEventCountersStoring>

- (id)unarchive;
- (void)archiveDictionary:(id)a0;

@end
