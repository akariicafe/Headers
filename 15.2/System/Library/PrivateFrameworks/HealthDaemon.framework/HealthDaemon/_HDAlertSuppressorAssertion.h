@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface _HDAlertSuppressorAssertion : HDAssertion {
    NSString *_processBundleIdentifier;
    NSObject<OS_dispatch_source> *_keepaliveTimer;
}

- (void).cxx_destruct;

@end
