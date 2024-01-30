@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATSocket : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_source> *_source;
    NSMutableArray *_delegates;
    char _readBuffer[65536];
    char *_writeBuffer;
    unsigned int _writeBufferOffset;
    unsigned long long _totalBytesSent;
    unsigned long long _totalBytesReceived;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long socketMode;
@property (nonatomic) unsigned long long suggestedBufferSize;
@property (nonatomic) int descriptor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id userInfo;
@property (readonly, nonatomic) int transportUpdgradeExceptionCount;
@property (nonatomic) unsigned int writeBufferSize;

+ (id)createBoundPair:(id[2])a0;

- (void)removeDelegate:(id)a0;
- (id)_flush;
- (void)addDelegate:(id)a0;
- (void)writeData:(id)a0 withCompletion:(id /* block */)a1;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (BOOL)isOpen;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)flush;
- (BOOL)writeAllData:(id)a0 error:(id *)a1;
- (BOOL)open;
- (void)encodeWithCoder:(id)a0;
- (void)addTransportUpgradeException;
- (void)removeTransportUpgradeException;
- (void)closeDescriptor;
- (void)notifySocketDidClose;
- (int)send:(const char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;
- (void)notifyHasDataAvailable:(const char *)a0 length:(long long)a1;
- (int)recv:(char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;
- (int)_send:(const char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;

@end
