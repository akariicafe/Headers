@class NSObject;
@protocol OS_os_transaction;

@interface RMSRunAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;

@end
