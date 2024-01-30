@interface ManagedUserAccountNotification : NSManagedObject

@property (nonatomic) short shownState;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
