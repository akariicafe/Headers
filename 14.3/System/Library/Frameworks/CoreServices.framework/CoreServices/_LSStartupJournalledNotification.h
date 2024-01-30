@class NSArray;

@interface _LSStartupJournalledNotification : NSObject

@property (readonly, nonatomic) int notification;
@property (readonly, nonatomic) NSArray *proxies;
@property (readonly, nonatomic) BOOL plugins;

- (id)initWithNotification:(int)a0 appProxies:(id)a1 plugins:(BOOL)a2;
- (void).cxx_destruct;

@end
