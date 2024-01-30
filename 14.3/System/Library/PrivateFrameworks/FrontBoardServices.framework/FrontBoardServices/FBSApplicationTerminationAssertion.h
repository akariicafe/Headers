@class NSString, BKSTerminationAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface FBSApplicationTerminationAssertion : NSObject {
    BKSTerminationAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_bundleID;
    NSString *_reason;
    long long _assertionState;
}

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) long long assertionState;

+ (id)_queue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBundleID:(id)a0 reason:(id)a1 acquisitionHandler:(id /* block */)a2;
- (id)description;
- (void)invalidate;

@end
