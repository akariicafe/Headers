@class NSString;

@interface _MXExtensionRequestDispatcher : NSObject <NSSecureCoding, _MXExtensionRequestDispatching, _MXExtensionStreamingRequestDispatching>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dispatchRequest:(id)a0 vendor:(id)a1 completion:(id /* block */)a2;
- (void)startSendingUpdatesForRequest:(id)a0 vendor:(id)a1 toObserver:(id)a2;
- (void)stopSendingUpdatesForRequest:(id)a0 vendor:(id)a1;

@end
