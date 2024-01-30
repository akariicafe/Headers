@class DTXChannel, NSSet, Protocol;

@interface DTXProxyChannel : NSObject {
    Protocol *_exportedInterface;
    _Atomic BOOL _hasProcessedMessage;
}

@property (retain, nonatomic) DTXChannel *channel;
@property (retain) Protocol *remoteInterface;
@property (retain, nonatomic) NSSet *additionalAllowedClassesForProtocolMethods;
@property (readonly) id remoteObjectProxy;

- (void)cancel;
- (void).cxx_destruct;
- (id)_allowedClassesForArgumentsOfRemoteInterfaceSelector:(SEL)a0 methodSignature:(id)a1;
- (id)_allowedClassesForReturnValues;
- (void)_sendInvocationMessage:(id)a0;
- (id)_validateDispatch:(id)a0;
- (id)initWithChannel:(id)a0 remoteProtocol:(id)a1 localProtocol:(id)a2;
- (void)setExportedObject:(id)a0 queue:(id)a1;

@end
