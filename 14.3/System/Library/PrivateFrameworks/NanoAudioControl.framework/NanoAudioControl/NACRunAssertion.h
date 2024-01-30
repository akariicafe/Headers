@class NSObject;
@protocol OS_os_transaction;

@interface NACRunAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

- (id)init;
- (void).cxx_destruct;

@end
