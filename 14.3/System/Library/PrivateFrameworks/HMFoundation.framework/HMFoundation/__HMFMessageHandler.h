@class NSString, NSArray, HMFObjectObserver, NSObject, HMFMessageDestination;
@protocol OS_dispatch_queue, HMFMessageReceiver;

@interface __HMFMessageHandler : HMFObject <HMFLogging, HMFObject>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMFObjectObserver *observer;
@property (readonly, weak) id<HMFMessageReceiver> receiver;
@property (readonly, copy) NSString *name;
@property (readonly, copy) HMFMessageDestination *destination;
@property (readonly, copy) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)handlerWithReceiver:(id)a0 name:(id)a1 policies:(id)a2 handler:(id /* block */)a3;
+ (id)handlerWithReceiver:(id)a0 name:(id)a1 policies:(id)a2 selector:(SEL)a3;

@end
