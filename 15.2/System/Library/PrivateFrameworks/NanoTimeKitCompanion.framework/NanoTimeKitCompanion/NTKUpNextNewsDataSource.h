@class NTKUpNextElementDataSource;

@interface NTKUpNextNewsDataSource : REElementDataSource

@property (retain, nonatomic) NTKUpNextElementDataSource *newsDataSourceProxy;

+ (id)bundleIdentifier;
+ (Class)nanoNewsDataSourceClass;
+ (BOOL)wantsReloadForSignificantTimeChange;
+ (unsigned long long)elementContentMode;

- (void)setRunning:(BOOL)a0;
- (void)setState:(unsigned long long)a0;
- (void)setDelegate:(id)a0;
- (void)setAllowsLocationUse:(BOOL)a0;
- (id)supportedSections;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (void)resume;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;
- (void)getElementsDuringDateInterval:(id)a0 inSection:(unsigned long long)a1 withHandler:(id /* block */)a2;

@end
