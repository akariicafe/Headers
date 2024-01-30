@class NSArray, NSString, NSPersistentHistoryToken, NSDate, NSFetchRequest, NSEntityDescription;

@interface NSPersistentHistoryTransaction : NSObject <NSCopying>

@property (class, readonly) NSEntityDescription *entityDescription;
@property (class, readonly) NSFetchRequest *fetchRequest;

@property (readonly, copy) NSDate *timestamp;
@property (readonly, copy) NSArray *changes;
@property (readonly) long long transactionNumber;
@property (readonly, copy) NSString *storeID;
@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *processID;
@property (readonly, copy) NSString *contextName;
@property (readonly, copy) NSString *author;
@property (readonly) NSPersistentHistoryToken *token;

+ (id)entityDescriptionWithContext:(id)a0;

- (id)objectIDNotification;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initialQueryGenerationToken;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)postQueryGenerationToken;

@end
