@interface HMDTimeBasedFlagsPersistentStore : NSObject <HMDTimeBasedFlagsStoring>

- (id)unarchive;
- (void)archiveDictionary:(id)a0;
- (id)unarchiveLegacyEventFlags;

@end
