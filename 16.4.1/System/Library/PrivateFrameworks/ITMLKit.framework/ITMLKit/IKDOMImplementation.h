@interface IKDOMImplementation : IKJSObject <IKJSDOMImplementation, IKJSDOMImplementationLS>

@property (readonly, getter=synchronousMode) long long MODE_SYNCHRONOUS;
@property (readonly, getter=asynchronousMode) long long MODE_ASYNCHRONOUS;

- (id)createLSInput;
- (id)createLSParser:(long long)a0 :(id)a1;
- (id)createDocument:(id)a0 :(id)a1;
- (id)createLSSerializer;

@end
