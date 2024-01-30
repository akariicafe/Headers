@class PPLocation, NSMutableSet, PPLocalLocationStore;

@interface PPLocationCache : NSObject {
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (id)locationForHome;
- (id)locationForWork;
- (void)_refresh;
- (id)init;
- (void)invalidate;
- (id)initWithLocationStore:(id)a0;
- (id)homeOrWorkAddresses;
- (void).cxx_destruct;

@end
