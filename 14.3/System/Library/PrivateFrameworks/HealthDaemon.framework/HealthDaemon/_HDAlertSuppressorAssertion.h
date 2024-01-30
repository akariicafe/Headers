@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface _HDAlertSuppressorAssertion : HDAssertion

@property (readonly, copy, nonatomic) NSString *processBundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *keepaliveTimer;

- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)a0 processBundleIdentifier:(id)a1;

@end
