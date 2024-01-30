@class NSString, NSDate;

@interface PXForYouBadgeManager : PXObservable <PXMutableForYouBadgeManager>

@property (class, retain, nonatomic) NSDate *lastSeenBadgeDate;

@property (readonly, nonatomic) unsigned long long unreadBadgeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startListeningForChanges;
- (void)dealloc;
- (void)setUnreadBadgeCount:(unsigned long long)a0;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)_didFinishPostingNotifications:(id)a0;
- (void)_stopListeningForChanges;
- (void)_updateUnreadCount;

@end
