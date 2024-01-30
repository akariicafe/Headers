@class NSTimer;

@interface _SFBookmarksLockCoordinator : NSObject {
    BOOL _haveBookmarksLock;
    NSTimer *_bookmarkLockTimer;
}

@property (readonly, nonatomic) BOOL hasBookmarksLock;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_clearBookmarkLockTimer;
- (void)_unlockBookmarksNow;
- (BOOL)lockBookmarks;
- (void)unlockBookmarksSoon;
- (void)unlockBookmarksIfNeeded;

@end
