@protocol DriverManagerObserver;

@interface ProxyDriverManagerObserver : NSObject <_SwiftDriverManagerObserver> {
    id<DriverManagerObserver> _observer;
}

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)approvalStateDidChange:(BOOL)a0;

@end
