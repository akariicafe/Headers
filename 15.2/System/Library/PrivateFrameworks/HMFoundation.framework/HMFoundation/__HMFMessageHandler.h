@class NSString, NSUUID, NSArray, NSObject;
@protocol OS_dispatch_queue, HMFMessageReceiver;

@interface __HMFMessageHandler : HMFObject <HMFLogging, HMFObject>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak) id<HMFMessageReceiver> receiver;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *target;
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
+ (id)handlerWithReceiver:(id)a0 targetUUID:(id)a1 name:(id)a2 policies:(id)a3 selector:(SEL)a4;
+ (id)handlerWithReceiver:(id)a0 name:(id)a1 policies:(id)a2 handler:(id /* block */)a3;

- (id)logIdentifier;
- (BOOL)hasReceiver:(id)a0;
- (id)initWithReceiver:(id)a0 targetUUID:(id)a1 name:(id)a2 policies:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)invokeWithMessage:(id)a0;

@end
