@class NSObject;
@protocol OS_dispatch_queue;

@interface DTXSharedMemoryTransport : DTXTransport {
    NSObject<OS_dispatch_queue> *_listenQueue;
    BOOL _creator;
}

@property (readonly, nonatomic) struct DTXSharedMemory { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; _Atomic int x7; _Atomic int x8; _Atomic unsigned int x9; _Atomic int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; unsigned int x14; unsigned int x15; unsigned int x16; char x17[0]; } *sharedMemory;
@property (readonly, nonatomic) unsigned long long totalSharedMemorySize;
@property (nonatomic) int remotePid;

+ (id)schemes;
+ (id)addressForMemory:(unsigned long long)a0 inProcess:(int)a1;
+ (id)addressForPosixSharedMemoryWithName:(id)a0;

- (void)disconnect;
- (void)dealloc;
- (void).cxx_destruct;
- (id)localAddresses;
- (BOOL)_setupCreatingSharedMemory:(id)a0 size:(int)a1;
- (BOOL)_setupWithShm:(struct DTXSharedMemory { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; _Atomic int x7; _Atomic int x8; _Atomic unsigned int x9; _Atomic int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; unsigned int x14; unsigned int x15; unsigned int x16; char x17[0]; } *)a0 asCreator:(BOOL)a1;
- (id)initWithLocalName:(id)a0 size:(int)a1;
- (id)initWithMappedMemory:(struct DTXSharedMemory { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; _Atomic int x7; _Atomic int x8; _Atomic unsigned int x9; _Atomic int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; unsigned int x14; unsigned int x15; unsigned int x16; char x17[0]; } *)a0;
- (id)initWithMemoryAddress:(unsigned long long)a0 inTask:(unsigned int)a1;
- (id)initWithRemoteAddress:(id)a0;
- (id)permittedBlockCompressionTypes;
- (unsigned long long)transmit:(const void *)a0 ofLength:(unsigned long long)a1;

@end
