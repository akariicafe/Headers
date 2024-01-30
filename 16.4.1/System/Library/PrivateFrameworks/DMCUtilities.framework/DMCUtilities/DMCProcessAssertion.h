@class NSString, NSObject;
@protocol OS_os_transaction;

@interface DMCProcessAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSString *reason;

- (id)initWithReason:(id)a0;
- (void)_createAssertion;
- (void)_releaseAssertion;
- (void)dealloc;
- (void).cxx_destruct;

@end
