@interface AAUIFamilyDetailsCache : NSObject

@property (readonly, nonatomic) unsigned long long pendingInviteCount;

+ (id)sharedCache;

- (void)invalidate;

@end
