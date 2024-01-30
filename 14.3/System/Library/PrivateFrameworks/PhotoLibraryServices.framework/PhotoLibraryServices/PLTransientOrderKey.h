@class NSManagedObjectContext, NSManagedObjectID;

@interface PLTransientOrderKey : NSObject

@property (retain, nonatomic) NSManagedObjectContext *moc;
@property (nonatomic) long long orderValue;
@property (retain, nonatomic) NSManagedObjectID *objectID;

- (void).cxx_destruct;
- (id)description;
- (id)childManagedObject;
- (id)secondaryOrderSortKey;

@end
