@interface CNXPC : NSObject

+ (id)resumedConnectionForServiceName:(id)a0 remoteObjectInterfaceProtocol:(id)a1;
+ (id)reasonConnectionWasInvalidated:(id)a0;
+ (id)listenerDelegateWithExportedObject:(id)a0 exportedInterfaceProtocol:(id)a1;
+ (void)addAllowedClasses:(id)a0 toInterface:(id)a1 forSelector:(SEL)a2 argumentIndex:(unsigned long long)a3 ofReply:(BOOL)a4;

@end
