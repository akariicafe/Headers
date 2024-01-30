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

- (id)contextName;
- (id)storeID;
- (id)timestamp;
- (id)changes;
- (long long)transactionNumber;
- (id)bundleID;
- (void)dealloc;
- (id)processID;
- (id)objectIDNotification;
- (id)initWithCoder:(id)a0;
- (id)initialQueryGenerationToken;
- (id)token;
- (id)postQueryGenerationToken;
- (id)author;
- (void)encodeWithCoder:(id)a0;

@end
