@class NSManagedObjectContext, NSManagedObjectID;

@interface PLTransientOrderKey : NSObject

@property (retain, nonatomic) NSManagedObjectContext *moc;
@property (nonatomic) long long orderValue;
@property (retain, nonatomic) NSManagedObjectID *objectID;

- (id)secondaryOrderSortKey;
- (id)description;
- (void).cxx_destruct;
- (id)childManagedObject;

@end
