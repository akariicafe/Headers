@class NSXPCListener, NSString, NSXPCConnection, NSMutableArray;
@protocol AUPBRegistrarHosting;

@interface AUPBServer : NSObject <NSXPCListenerDelegate, AUPBServing> {
    NSXPCConnection *mRegistrarConnection;
    id<AUPBRegistrarHosting> mProxyInterface;
    NSXPCListener *mListener;
    NSMutableArray *mClientConnections;
    struct unique_ptr<CADeprecated::CAMutex, std::default_delete<CADeprecated::CAMutex>> { struct __compressed_pair<CADeprecated::CAMutex *, std::default_delete<CADeprecated::CAMutex>> { struct CAMutex *__value_; } __ptr_; } mLock;
    struct map<unsigned int, RemoteAUHandleInfo, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, RemoteAUHandleInfo>>> { struct __tree<std::__value_type<unsigned int, RemoteAUHandleInfo>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, RemoteAUHandleInfo>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } mAUHandlesToInfo;
    struct map<unsigned int, AUProcessingBlock, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, AUProcessingBlock>>> { struct __tree<std::__value_type<unsigned int, AUProcessingBlock>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, AUProcessingBlock>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, AUProcessingBlock>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } mBlockHandlesToMethods;
    unsigned int mAUPBRefCounter;
    struct unique_ptr<TestAUProcessingBlock, std::default_delete<TestAUProcessingBlock>> { struct __compressed_pair<TestAUProcessingBlock *, std::default_delete<TestAUProcessingBlock>> { struct TestAUProcessingBlock *__value_; } __ptr_; } mTestBlock;
    unsigned int mAUHandleCntr;
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

- (struct OpaqueAUPB { } *)registerBlock:(const struct AUPBMethods { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; } *)a0 withUserData:(void *)a1;
- (void)getAudioUnit:(unsigned int)a0 parameter:(unsigned int)a1 onScope:(unsigned int)a2 element:(unsigned int)a3 inReply:(id /* block */)a4;
- (void)copyProcessingBlock:(unsigned int)a0 property:(unsigned int)a1 intoReply:(id /* block */)a2;
- (unsigned long long)retainCount;
- (int)registerAU:(struct OpaqueRemoteAudioUnit { } *)a0 inBlock:(struct OpaqueAUPB { } *)a1;
- (void)blockListChanged;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)retain;
- (void)handleRegistrarCrash;
- (void)getAudioUnit:(unsigned int)a0 propertyInfo:(unsigned int)a1 onScope:(unsigned int)a2 element:(unsigned int)a3 inReply:(id /* block */)a4;
- (struct AUProcessingBlock { struct AUPBMethods { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; } x0; void *x1; } *)aupbFromAUHandle:(unsigned int)a0;
- (void)checkConnectRegistrar;
- (id)autorelease;
- (void)startRegistrarConnection;
- (void).cxx_destruct;
- (void)getAudioUnit:(unsigned int)a0 property:(unsigned int)a1 onScope:(unsigned int)a2 element:(unsigned int)a3 inReply:(id /* block */)a4;
- (struct OpaqueRemoteAudioUnit { } *)auRefFromHandle:(unsigned int)a0;
- (void)setProcessingBlock:(unsigned int)a0 property:(unsigned int)a1 value:(id)a2 withReply:(id /* block */)a3;
- (id)init;
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit { } *)a0;
- (struct AUProcessingBlock { struct AUPBMethods { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; } x0; void *x1; } *)aupbFromRef:(struct OpaqueAUPB { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)unregisterAU:(struct OpaqueRemoteAudioUnit { } *)a0;
- (unsigned int)handleFromAUPBRef:(struct OpaqueAUPB { } *)a0;
- (void)setAudioUnit:(unsigned int)a0 property:(unsigned int)a1 onScope:(unsigned int)a2 element:(unsigned int)a3 value:(id)a4 withReply:(id /* block */)a5;
- (void)processingBlock:(struct OpaqueAUPB { } *)a0 properties:(const unsigned int *)a1 count:(unsigned int)a2 changedWithQualifierData:(void *)a3 length:(unsigned int)a4;
- (void)dealloc;
- (id).cxx_construct;
- (oneway void)release;
- (void)processingBlockRef:(struct OpaqueAUPB { } *)a0 propertyChanged:(unsigned int)a1;
- (void)setAudioUnit:(unsigned int)a0 parameter:(unsigned int)a1 onScope:(unsigned int)a2 element:(unsigned int)a3 value:(float)a4 withReply:(id /* block */)a5;
- (int)unregisterBlock:(struct OpaqueAUPB { } *)a0;

@end
