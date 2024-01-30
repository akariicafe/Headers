@class NSDictionary, CNFuture;
@protocol CNSchedulerProvider;

@interface ABSAddressBookSettings : NSObject

@property (readonly, nonatomic) CNFuture *contactStoreFuture;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) int policy;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOptions:(id)a0 policy:(int)a1;
- (id)initWithOptions:(id)a0 policy:(int)a1 contactStoreFuture:(id)a2 schedulerProvider:(id)a3;
- (id)initWithContactStoreFuture:(id)a0;
- (id)newFaultHandlerWithStorage:(id)a0;

@end
