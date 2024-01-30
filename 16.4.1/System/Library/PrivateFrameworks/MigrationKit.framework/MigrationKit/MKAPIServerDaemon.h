@class MKPowerAssertion, NSObject;
@protocol OS_os_transaction;

@interface MKAPIServerDaemon : MKAPIServer {
    MKPowerAssertion *_power;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;

- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
