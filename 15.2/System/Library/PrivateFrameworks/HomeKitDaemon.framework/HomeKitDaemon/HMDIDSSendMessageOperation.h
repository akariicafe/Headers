@class HMFMessage, NSString, NSArray, HMDRemoteMessageDestination, IDSService;

@interface HMDIDSSendMessageOperation : HMFOperation <HMFLogging, HMFObject, IDSServiceDelegate> {
    double _timeout;
    HMDRemoteMessageDestination *_destination;
    NSString *_messageIdentifier;
}

@property (readonly) IDSService *service;
@property (readonly) HMFMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;
+ (double)timeout;

- (id)initWithMessage:(id)a0;
- (id)logIdentifier;
- (void)main;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (id)initWithMessage:(id)a0 service:(id)a1;

@end
