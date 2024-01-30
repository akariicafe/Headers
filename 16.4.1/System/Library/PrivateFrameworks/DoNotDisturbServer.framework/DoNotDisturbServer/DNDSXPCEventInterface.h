@interface DNDSXPCEventInterface : NSObject

+ (id)sharedInstance;

- (void)setEvent:(id)a0 forKey:(id)a1 onStream:(id)a2;
- (void)registerForStream:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
