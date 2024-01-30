@class ICNote, ICAccount, UIWindow;

@interface ICNoteLockManager : NSObject

@property (retain, nonatomic) ICNote *updatedNote;
@property (readonly, nonatomic) ICAccount *account;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (void)addLockWithCompletionHandler:(id /* block */)a0;
- (id)initWithNote:(id)a0 window:(id)a1;
- (void)removeLockWithCompletionHandler:(id /* block */)a0;
- (void)toggleLockWithCompletionHandler:(id /* block */)a0;
- (void)unsafelyToggleLock;

@end
