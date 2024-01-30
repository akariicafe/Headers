@class PKHostPlugIn, NSObject;
@protocol OS_dispatch_queue;

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (void)registerDefaults:(id)a0;
- (id)initWithPlugIn:(id)a0;

@end
