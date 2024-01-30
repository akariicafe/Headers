@class NSString, NSUUID, NSArray, CARPFObjectObserver, NSObject;
@protocol OS_dispatch_queue, CARPFMessageReceiver;

@interface __CARPFMessageHandler : CARPFObject <CARPFLogging, CARPFObject>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) CARPFObjectObserver *observer;
@property (readonly, weak) id<CARPFMessageReceiver> receiver;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *target;
@property (readonly, copy) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)handlerWithReceiver:(id)a0 name:(id)a1 policies:(id)a2 handler:(id /* block */)a3;
+ (id)handlerWithReceiver:(id)a0 name:(id)a1 policies:(id)a2 selector:(SEL)a3;

@end
