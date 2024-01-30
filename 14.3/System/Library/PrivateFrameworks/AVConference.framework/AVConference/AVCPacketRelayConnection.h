@interface AVCPacketRelayConnection : NSObject

+ (id)connectionWithSocket:(unsigned short)a0;
+ (id)connectionWithSocket:(unsigned short)a0 remoteAddress:(id)a1;
+ (id)connectionWithSocket:(unsigned short)a0 remoteAddress:(id)a1 packetFilter:(id)a2;
+ (id)connectionWithIDSDestination:(id)a0;
+ (id)connectionWithIDSSocketDescriptor:(unsigned short)a0;

@end
