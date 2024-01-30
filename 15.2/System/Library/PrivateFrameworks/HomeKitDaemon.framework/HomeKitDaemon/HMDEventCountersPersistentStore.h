@class NSString;

@interface HMDEventCountersPersistentStore : NSObject <HMDEventCountersStoring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)archiveDictionary:(id)a0;
- (id)unarchiveDictionary;

@end
