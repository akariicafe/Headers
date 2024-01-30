@class NSArray, NSString, NSData, NSPersistentStoreCoordinator, NSManagedObjectID;

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {
    long long _rowIdentifier;
    double _timestamp;
    NSArray *_changes;
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_processID;
    NSString *_contextName;
    NSString *_author;
    NSData *_queryGeneration;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_backingObjectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_backingObjectID;
- (id)storeID;
- (id)author;
- (id)processID;
- (void)encodeWithCoder:(id)a0;
- (id)timestamp;
- (long long)transactionNumber;
- (id)objectIDNotification;
- (id)bundleID;
- (id)initWithCoder:(id)a0;
- (id)changes;
- (id)initWithDictionary:(id)a0 andObjectID:(id)a1;
- (id)contextName;
- (id)token;
- (void)dealloc;
- (id)postQueryGenerationToken;
- (id)initialQueryGenerationToken;

@end
