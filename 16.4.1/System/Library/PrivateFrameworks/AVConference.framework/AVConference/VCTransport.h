@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCTransport : NSObject {
    struct tagHANDLE { int x0; } *tpHandle;
    NSMutableDictionary *iceBlocks;
    NSObject<OS_dispatch_queue> *delegateQueue;
    NSMutableDictionary *dataReceivedHandlers;
    NSObject<OS_dispatch_queue> *dataReceivedHandlerQueue;
}

+ (id)sharedInstance;

- (void)cleanup;
- (void)dealloc;
- (id)init;
- (BOOL)ipPortStillExists:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 requiresWifi:(BOOL)a1;
- (void)setARPLHandler:(id /* block */)a0;
- (int)stopConnectivityCheckForCallID:(unsigned int)a0;
- (int)detailedErrorCodeForConnectionWithCallID:(unsigned int)a0;
- (int)discardRelayBindingForCallID:(unsigned int)a0;
- (int)discardRelayBindingForCallID:(unsigned int)a0 withChannelNumber:(int)a1;
- (int)flushBasebandQueue:(void *)a0;
- (int)getCellTechForCallID:(unsigned int)a0 localCellTech:(int *)a1 isLocalCellularQoSEnabled:(int *)a2 remoteCellTech:(int *)a3 isRemoteCellularQoSEnabled:(int *)a4;
- (int)getConnectionDataForCallID:(unsigned int)a0 version:(unsigned char)a1 useCompressedData:(BOOL)a2 pConnectionData:(void **)a3 connectDataSizeInBytes:(int *)a4 relayDictionary:(struct __CFDictionary { } *)a5 interfaceUpdate:(BOOL)a6 nonCellularCandidateTimeout:(double)a7;
- (int)getLoopbackIP:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0;
- (int)getNextBestCandidate:(struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } *)a0 callID:(unsigned int)a1 isLocal:(int)a2 IPPortToExclude:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a3;
- (id)getRemoteCIDForDstIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 callID:(unsigned int)a1;
- (int)getRemoteICEVersion:(unsigned int)a0 remoteICEVersion:(unsigned int *)a1;
- (int)getSignalStrengthBars:(int *)a0 displayBars:(int *)a1 maxDisplayBars:(int *)a2;
- (void)iceConnectedForCallID:(unsigned int)a0 result:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT *x23; int x24; } *)a1 didReceivePacket:(int)a2 useRelay:(int)a3 secretKey:(struct __CFData { } *)a4 skeResult:(int)a5;
- (void)iceNewCandidatesForCallID:(unsigned int)a0 blob:(char *)a1 size:(int)a2 newCandidateVersion:(unsigned short)a3;
- (void)iceRemoveIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 forCallID:(unsigned int)a1 isLocalInterface:(BOOL)a2;
- (void)iceShouldNominateNewCandidate:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x0; struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x1; int x2; unsigned short x3; unsigned short x4; unsigned char x5[8]; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; unsigned int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; struct tagCANDIDATEPARIR *x16; } *)a0 forCallID:(unsigned int)a1 interfaceMask:(int)a2 nominated:(int *)a3 demote:(int *)a4 connectionPriority:(int *)a5 replaceOnly:(int *)a6;
- (int)processRemoteInterfaceChangeMessageWithLocalCallID:(unsigned int)a0 remoteCallID:(unsigned int)a1 remoteData:(void *)a2 remoteLen:(int)a3 remoteCandidateVersion:(unsigned short)a4;
- (void)receivedDataPacket:(char *)a0 length:(int)a1 forCallID:(unsigned int)a2 encrypted:(BOOL)a3 OFTType:(int)a4;
- (void)registerDataReceivedHandler:(id /* block */)a0 forCallID:(unsigned int)a1;
- (void)registerICEBlockForCallID:(unsigned int)a0 connectedBlock:(id /* block */)a1 newCandidatesBlock:(id /* block */)a2 newNominationBlock:(id /* block */)a3 removeIPPortBlock:(id /* block */)a4;
- (int)sendData:(id)a0 localCallID:(unsigned int)a1 remoteCallID:(unsigned int)a2 encrypted:(BOOL)a3 OFTType:(int)a4;
- (int)sendUDPPacketReliableEncrypted:(id)a0 localIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a1 destinationIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a2 oftType:(int)a3;
- (int)setForceIPv6ForCallID:(unsigned int)a0;
- (int)setForceRelayForCallID:(unsigned int)a0;
- (int)setICETimeout:(double)a0;
- (void)setReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (int)setSKEState:(struct SKEStateOpaque { } *)a0 forCallID:(unsigned int)a1;
- (int)setupDTLSSecurity:(unsigned int)a0 connectionResult:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT *x23; int x24; } *)a1 completionHandler:(id /* block */)a2;
- (int)startConnectionCheckForCallID:(unsigned int)a0 remoteConnectionDataBlob:(id)a1 relayDictionary:(id)a2 iceTimeout:(double)a3 securityIdentity:(struct __SecIdentity { } *)a4 skeState:(struct SKEStateOpaque { } *)a5 usedRelay:(int *)a6;
- (int)updateBasebandForConnection:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT *x23; int x24; } *)a0 notificationRegistrationToken:(unsigned int)a1 callType:(unsigned char)a2;
- (int)updateICERoleForCallID:(unsigned int)a0 role:(int)a1 remoteCallID:(unsigned int)a2 sessionID:(struct __CFString { } *)a3;
- (int)updateInterfaceList:(unsigned int)a0 shouldFilterCellInterface:(BOOL)a1 isUpdateNeeded:(int *)a2;
- (int)updateQoS:(BOOL)a0;
- (int)updateQualityIndicator:(int)a0 isIPv6:(BOOL)a1;

@end
