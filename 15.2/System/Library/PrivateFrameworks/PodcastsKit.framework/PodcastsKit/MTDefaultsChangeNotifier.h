@class NSUserDefaults;

@interface MTDefaultsChangeNotifier : MTDictionaryDiff

@property (nonatomic, getter=isRunning) BOOL running;
@property (retain, nonatomic) NSUserDefaults *defaults;

- (void)start;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)stop;
- (id)initWithProperties:(id)a0 defaults:(id)a1;
- (void)_defaultsChanged;

@end
