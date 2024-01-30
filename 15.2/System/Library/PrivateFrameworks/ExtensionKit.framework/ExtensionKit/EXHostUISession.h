@class NSString, NSXPCListenerEndpoint;

@interface EXHostUISession : EXUISession <_EXExtensionProcessObserver>

@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

@end
