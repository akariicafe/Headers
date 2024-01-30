@class NSString, NSArray, HMDSecureRemoteMessageTransport, HMFMessage;

@interface HMDRemoteSendMessageOperation : HMFOperation <HMFLogging, HMFObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak) HMDSecureRemoteMessageTransport *transport;
@property (getter=isMessageResponseHandled) BOOL messageResponseHandled;
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

- (id)logIdentifier;
- (void)main;
- (void)cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)_respondWithError:(id)a0 playload:(id)a1;
- (id)initWithMessage:(id)a0 transport:(id)a1;

@end
