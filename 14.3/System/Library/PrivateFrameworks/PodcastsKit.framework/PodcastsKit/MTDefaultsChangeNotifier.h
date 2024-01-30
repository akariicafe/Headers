@class NSUserDefaults;

@interface MTDefaultsChangeNotifier : MTDictionaryDiff

@property (nonatomic, getter=isRunning) BOOL running;
@property (retain, nonatomic) NSUserDefaults *defaults;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithProperties:(id)a0 defaults:(id)a1;
- (void)_defaultsChanged;

@end
