@class NSUUID;

@interface MTSDeviceSetupExtensionMessengerRequest : HMFObject

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
