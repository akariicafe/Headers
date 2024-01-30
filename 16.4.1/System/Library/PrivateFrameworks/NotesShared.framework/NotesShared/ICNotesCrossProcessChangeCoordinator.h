@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;

- (void)registerForEditorExtensionDidSaveNotificationWithBlock:(id /* block */)a0;
- (void)postCrossProcessNotificationName:(id)a0;
- (void)postAccountDidChangeNotification;
- (void)dealloc;
- (void)registerForPasswordStatusDidChangeNotifications;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (void)registerForAccountNotifications;
- (void)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (void)postEditorExtensionDidSaveNotification;
- (void)postNotesPasswordStatusDidChangeNotification;
- (void).cxx_destruct;

@end
