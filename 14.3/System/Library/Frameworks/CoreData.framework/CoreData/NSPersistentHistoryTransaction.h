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

+ (BOOL)supportsSecureCoding;
+ (id)entityDescriptionWithContext:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectIDNotification;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initialQueryGenerationToken;
- (id)postQueryGenerationToken;
- (void)encodeWithCoder:(id)a0;

@end
