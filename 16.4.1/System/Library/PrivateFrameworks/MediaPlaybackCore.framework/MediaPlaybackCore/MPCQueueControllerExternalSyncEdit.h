@class NSString;

@interface MPCQueueControllerExternalSyncEdit : MPCQueueControllerEdit

@property (readonly, copy, nonatomic) NSString *targetContentItemID;
@property (readonly, nonatomic) BOOL allowsChangingCurrentItem;

- (void).cxx_destruct;
- (void)setTargetContentItemID:(id)a0;

@end
