@interface MIDICIDiscoveryManager : NSObject {
    unsigned int _mClient;
}

@property (copy, nonatomic) id /* block */ responseBlock;

+ (id)sharedInstance;

- (id)handleNotification:(const struct MIDINotification { int x0; unsigned int x1; } *)a0;
- (int)setupManager;
- (void).cxx_destruct;
- (void)dealloc;
- (int)createClient;
- (void)discoverWithHandler:(id /* block */)a0;
- (void)debugPrintMessage;
- (void)discover;

@end
