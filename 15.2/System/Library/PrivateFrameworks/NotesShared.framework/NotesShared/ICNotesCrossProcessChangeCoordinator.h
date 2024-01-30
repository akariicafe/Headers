@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;

- (void)registerForPasswordStatusDidChangeNotifications;
- (void)registerForAccountNotifications;
- (void)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (void).cxx_destruct;
- (void)postNotesPasswordStatusDidChangeNotification;
- (void)postAccountDidChangeNotification;
- (void)postCrossProcessNotificationName:(id)a0;
- (void)dealloc;

@end
