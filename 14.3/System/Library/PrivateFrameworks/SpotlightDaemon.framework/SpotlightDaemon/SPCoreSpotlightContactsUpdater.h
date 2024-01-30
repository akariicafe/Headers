@interface SPCoreSpotlightContactsUpdater : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)updatedCountsFromExisting:(id)a0 result:(long long *)a1 shouldUpdateMonth:(BOOL)a2;
- (void)updateContactCounts:(id)a0;

@end
