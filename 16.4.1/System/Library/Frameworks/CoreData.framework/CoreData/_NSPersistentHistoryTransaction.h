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

- (id)processID;
- (void)encodeWithCoder:(id)a0;
- (id)changes;
- (id)token;
- (id)initWithDictionary:(id)a0 andObjectID:(id)a1;
- (id)_backingObjectID;
- (id)initWithCoder:(id)a0;
- (long long)transactionNumber;
- (id)storeID;
- (id)objectIDNotification;
- (void)dealloc;
- (id)initialQueryGenerationToken;
- (id)contextName;
- (id)bundleID;
- (id)timestamp;
- (id)postQueryGenerationToken;
- (id)author;

@end
