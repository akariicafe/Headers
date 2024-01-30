@class NSArray, NSDictionary, WBSPersistentPropertyListStore, NSDate;

@interface WBSPasswordBreachStore : NSObject {
    WBSPersistentPropertyListStore *_store;
}

@property (retain, nonatomic) NSDictionary *queuedPasswordBagManagerState;
@property (retain, nonatomic) NSArray *resultRecords;
@property (retain, nonatomic) NSArray *recentlyBreachedPersistentIdentifiers;
@property (nonatomic) unsigned long long rampIdentifier;
@property (retain, nonatomic) NSDate *lastSessionCompletionDate;

+ (id)_createPersistentIdentifierCanary;
+ (BOOL)_readAndValidatePersistentIdentifierCanaryWithPersistentIdentifier:(id)a0 expectedValue:(id)a1;

- (void).cxx_destruct;
- (void)saveStoreSynchronously;
- (void)saveAndCloseStoreSynchronously;
- (id)initWithBackingStoreURL:(id)a0;

@end
