@class NSObject;
@protocol OS_os_transaction;

@interface NACRunAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

- (void).cxx_destruct;
- (id)init;

@end
