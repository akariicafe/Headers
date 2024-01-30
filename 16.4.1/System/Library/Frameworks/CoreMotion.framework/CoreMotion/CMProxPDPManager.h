@interface CMProxPDPManager : NSObject

@property (readonly, nonatomic) id _internal;

+ (BOOL)isAvailable;

- (void)dealloc;
- (id)init;
- (void)startPDPUpdatesWithHandler:(id /* block */)a0;

@end
