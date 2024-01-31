@class NSDictionary, CNFuture;
@protocol CNSchedulerProvider;

@interface ABSAddressBookSettings : NSObject

@property (readonly, nonatomic) CNFuture *contactStoreFuture;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) int policy;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)initWithContactStoreFuture:(id)a0;
- (id)initWithOptions:(id)a0 policy:(int)a1;
- (id)initWithOptions:(id)a0 policy:(int)a1 contactStoreFuture:(id)a2 schedulerProvider:(id)a3;
- (id)newFaultHandlerWithStorage:(id)a0;

@end
