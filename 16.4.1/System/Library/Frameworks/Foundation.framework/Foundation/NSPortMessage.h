@class NSArray, NSPort, NSMutableArray;

@interface NSPortMessage : NSObject {
    NSPort *localPort;
    NSPort *remotePort;
    NSMutableArray *components;
    unsigned int msgid;
    void *reserved2;
    void *reserved;
}

@property (readonly, copy) NSArray *components;
@property (readonly, retain) NSPort *receivePort;
@property (readonly, retain) NSPort *sendPort;
@property unsigned int msgid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)sendBeforeDate:(id)a0;
- (id)initWithReceivePort:(id)a0 sendPort:(id)a1 components:(id)a2;
- (id)initWithSendPort:(id)a0 receivePort:(id)a1 components:(id)a2;

@end
