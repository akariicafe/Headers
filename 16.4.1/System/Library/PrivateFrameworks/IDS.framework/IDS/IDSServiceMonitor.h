@class NSString;

@interface IDSServiceMonitor : NSObject {
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (id)initWithService:(id)a0;
- (void)_postAvailability:(long long)a0;
- (void)_updateAvailability;
- (void)dealloc;
- (void)updateAvailability;
- (long long)serviceAvailability;
- (id)description;
- (void).cxx_destruct;

@end
