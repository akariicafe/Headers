@class PPLocation, NSMutableSet, PPLocalLocationStore;

@interface PPLocationCache : NSObject {
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (id)initWithLocationStore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)locationForHome;
- (id)locationForWork;
- (void)invalidate;
- (id)homeOrWorkAddresses;
- (void)_refresh;

@end
