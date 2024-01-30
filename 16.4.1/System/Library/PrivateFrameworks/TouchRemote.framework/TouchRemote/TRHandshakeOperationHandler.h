@class NSString;

@interface TRHandshakeOperationHandler : NSObject <TROperationHandler>

@property (copy, nonatomic) id /* block */ handshakeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
