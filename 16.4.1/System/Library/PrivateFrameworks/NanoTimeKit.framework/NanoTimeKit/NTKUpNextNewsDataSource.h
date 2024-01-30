@class NTKUpNextElementDataSource;

@interface NTKUpNextNewsDataSource : REElementDataSource

@property (retain, nonatomic) NTKUpNextElementDataSource *newsDataSourceProxy;

+ (id)bundleIdentifier;
+ (unsigned long long)elementContentMode;
+ (Class)nanoNewsDataSourceClass;
+ (BOOL)wantsReloadForSignificantTimeChange;

- (void)setRunning:(BOOL)a0;
- (void)pause;
- (void)setDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setState:(unsigned long long)a0;
- (void)resume;
- (void)getElementsDuringDateInterval:(id)a0 inSection:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;
- (void)setAllowsLocationUse:(BOOL)a0;
- (id)supportedSections;

@end
