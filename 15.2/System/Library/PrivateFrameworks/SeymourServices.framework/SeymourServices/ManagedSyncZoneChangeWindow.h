@class NSData, NSString;

@interface ManagedSyncZoneChangeWindow : NSManagedObject

@property (nonatomic, copy) NSData *changeWindow;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
