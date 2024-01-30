@class NSString;

@interface IDSServiceMonitor : NSObject {
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (id)initWithService:(id)a0;
- (void)_updateAvailability;
- (void)updateAvailability;
- (id)description;
- (long long)serviceAvailability;
- (void).cxx_destruct;
- (void)_postAvailability:(long long)a0;
- (void)dealloc;

@end
