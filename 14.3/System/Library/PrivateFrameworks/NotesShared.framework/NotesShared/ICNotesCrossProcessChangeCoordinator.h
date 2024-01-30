@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;

- (void).cxx_destruct;
- (void)dealloc;
- (void)registerForPasswordStatusDidChangeNotifications;
- (void)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (void)postCrossProcessNotificationName:(id)a0;
- (void)postAccountDidChangeNotification;
- (void)postNotesPasswordStatusDidChangeNotification;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (void)registerForAccountNotifications;

@end
