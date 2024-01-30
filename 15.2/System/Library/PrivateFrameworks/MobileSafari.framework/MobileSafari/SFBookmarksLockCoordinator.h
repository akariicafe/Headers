@class NSTimer;

@interface SFBookmarksLockCoordinator : NSObject {
    BOOL _haveBookmarksLock;
    BOOL _needsBookmarksLockOnAppResume;
    NSTimer *_bookmarkLockTimer;
}

@property (class, readonly, nonatomic) SFBookmarksLockCoordinator *sharedCoordinator;

@property (readonly, nonatomic) BOOL hasBookmarksLock;

+ (void)showLockedDatabaseAlertForAction:(long long)a0 fromViewController:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_willResignActive;
- (void)_didBecomeActive;
- (void)unlockBookmarksIfNeeded;
- (BOOL)lockBookmarks;
- (void)_clearBookmarkLockTimer;
- (void)_unlockBookmarksNow;
- (void)unlockBookmarksSoon;

@end
