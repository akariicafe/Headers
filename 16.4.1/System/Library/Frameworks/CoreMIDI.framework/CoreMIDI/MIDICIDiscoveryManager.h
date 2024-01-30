@interface MIDICIDiscoveryManager : NSObject {
    unsigned int _mClient;
}

@property (copy, nonatomic) id /* block */ responseBlock;

+ (id)sharedInstance;

- (int)setupManager;
- (id)handleNotification:(const struct MIDINotification { int x0; unsigned int x1; } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (int)createClient;
- (void)debugPrintMessage;
- (void)discover;
- (void)discoverWithHandler:(id /* block */)a0;

@end
