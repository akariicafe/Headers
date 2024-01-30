@class NTKUpNextElementDataSource;

@interface NTKUpNextNewsDataSource : REElementDataSource

@property (retain, nonatomic) NTKUpNextElementDataSource *newsDataSourceProxy;

+ (id)bundleIdentifier;
+ (Class)nanoNewsDataSourceClass;
+ (BOOL)wantsReloadForSignificantTimeChange;
+ (unsigned long long)elementContentMode;

- (void)setRunning:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)setState:(unsigned long long)a0;
- (void)resume;
- (void)setDelegate:(id)a0;
- (id)supportedSections;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;
- (void)setAllowsLocationUse:(BOOL)a0;
- (void)getElementsDuringDateInterval:(id)a0 inSection:(unsigned long long)a1 withHandler:(id /* block */)a2;

@end
