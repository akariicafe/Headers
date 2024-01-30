@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _BUCountingAssertion : NSObject <BUAssertion> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
