@class NSString, NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AUPBRegistrarHosting;

@interface AUPBClientManager : NSObject <AUPBRegistrarListening, AUPBInspecting> {
    NSXPCConnection *mRegistrarConnection;
    id<AUPBRegistrarHosting> mProxyInterface;
    NSMutableArray *mRemoteServers;
    struct vector<PropertyListener, std::allocator<PropertyListener>> { struct PropertyListener *__begin_; struct PropertyListener *__end_; struct __compressed_pair<PropertyListener *, std::allocator<PropertyListener>> { struct PropertyListener *__value_; } __end_cap_; } mPropertyListeners;
    struct vector<NewServerListener, std::allocator<NewServerListener>> { struct NewServerListener *__begin_; struct NewServerListener *__end_; struct __compressed_pair<NewServerListener *, std::allocator<NewServerListener>> { struct NewServerListener *__value_; } __end_cap_; } mNewServerListeners;
    unsigned int mServerRefCounter;
    NSObject<OS_dispatch_queue> *mTouchServersQueue;
    int mNotifyToken;
    BOOL mValidToken;
    BOOL mConnectionAcknowledged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (oneway void)release;
- (void)handleRegistrarCrash;
- (id).cxx_construct;
- (struct OpaqueRemoteAudioUnit { } *)auRefFromHandle:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit { } *)a0;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (void).cxx_destruct;
- (unsigned long long)retainCount;
- (void)newServerAdded:(id)a0;
- (int)addNewServerListener:(void /* function */ *)a0 withUserData:(void *)a1;
- (int)addPropertyListener:(void /* function */ *)a0 onServer:(struct OpaqueAUPBServer { } *)a1 block:(struct OpaqueAUPB { } *)a2 property:(unsigned int)a3 withUserData:(void *)a4;
- (struct OpaqueAUPB { } *)aupbRefFromHandle:(unsigned int)a0;
- (int)copyPBProperty:(unsigned int)a0 onServer:(struct OpaqueAUPBServer { } *)a1 block:(struct OpaqueAUPB { } *)a2 intoValue:(const void **)a3;
- (int)getAUParameter:(unsigned int)a0 onServer:(struct OpaqueAUPBServer { } *)a1 audioUnit:(struct OpaqueRemoteAudioUnit { } *)a2 scope:(unsigned int)a3 element:(unsigned int)a4 copiedIntoValue:(float *)a5;
- (int)getAUProperty:(unsigned int)a0 onServer:(struct OpaqueAUPBServer { } *)a1 audioUnit:(struct OpaqueRemoteAudioUnit { } *)a2 scope:(unsigned int)a3 element:(unsigned int)a4 copiedIntoBufer:(void **)a5 withSize:(unsigned int *)a6;
- (int)getAUPropertyInfo:(unsigned int)a0 onServer:(struct OpaqueAUPBServer { } *)a1 audioUnit:(struct OpaqueRemoteAudioUnit { } *)a2 scope:(unsigned int)a3 element:(unsigned int)a4 intoDataSize:(unsigned int *)a5 writeable:(char *)a6;
- (int)getSerialAUProperty:(unsigned int)a0 onServer:(struct OpaqueAUPBServer { } *)a1 audioUnit:(struct OpaqueRemoteAudioUnit { } *)a2 scope:(unsigned int)a3 element:(unsigned int)a4 inData:(id *)a5;
- (void)processingBlock:(unsigned int)a0 propertiesChanged:(id)a1 withQualifierData:(id)a2;
- (void)processingBlock:(unsigned int)a0 propertyChanged:(unsigned int)a1;
- (int)removePropertyListener:(void /* function */ *)a0 onServer:(struct OpaqueAUPBServer { } *)a1 block:(struct OpaqueAUPB { } *)a2 property:(unsigned int)a3 withUserData:(void *)a4;
- (int)removePropertyListenersForServer:(struct OpaqueAUPBServer { } *)a0;
- (int)removeServerListener:(void /* function */ *)a0 withUserData:(void *)a1;
- (id)serverFromRef:(struct OpaqueAUPBServer { } *)a0;
- (int)setAUParameter:(unsigned int)a0 onServer:(struct OpaqueAUPBServer { } *)a1 audioUnit:(struct OpaqueRemoteAudioUnit { } *)a2 scope:(unsigned int)a3 element:(unsigned int)a4 value:(float)a5;
- (int)setAUProperty:(unsigned int)a0 onServer:(struct OpaqueAUPBServer { } *)a1 audioUnit:(struct OpaqueRemoteAudioUnit { } *)a2 scope:(unsigned int)a3 element:(unsigned int)a4 withValue:(const void *)a5 size:(unsigned int)a6;
- (int)setPBProperty:(unsigned int)a0 onServer:(struct OpaqueAUPBServer { } *)a1 block:(struct OpaqueAUPB { } *)a2 value:(void *)a3;
- (int)setSerialAUProperty:(unsigned int)a0 onServer:(struct OpaqueAUPBServer { } *)a1 audioUnit:(struct OpaqueRemoteAudioUnit { } *)a2 scope:(unsigned int)a3 element:(unsigned int)a4 toData:(id)a5;
- (void)startRegistarConnection;

@end
