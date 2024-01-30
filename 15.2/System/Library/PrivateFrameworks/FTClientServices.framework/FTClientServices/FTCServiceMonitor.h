@interface FTCServiceMonitor : NSObject {
    long long _availability;
    long long _type;
    int _token;
}

@property (readonly, nonatomic) long long serviceType;

- (void)_updateAvailability;
- (void)updateAvailability;
- (long long)serviceAvailability;
- (void)_postAvailability:(long long)a0;
- (void)dealloc;
- (id)initWithServiceType:(long long)a0;

@end
