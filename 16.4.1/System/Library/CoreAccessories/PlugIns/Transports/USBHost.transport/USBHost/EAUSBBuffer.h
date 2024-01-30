@class AccessoryEAInterface;

@interface EAUSBBuffer : NSObject {
    char *_bufPtr;
    unsigned long long _bufferLength;
}

@property (weak, nonatomic) AccessoryEAInterface *eaInterface;
@property int usbError;
@property (readonly, nonatomic) char *readPtr;
@property (readonly, nonatomic) char *writePtr;
@property (readonly, nonatomic) unsigned long long writeAttempts;
@property (readonly, nonatomic) unsigned long long dataLength;
@property (readonly, nonatomic) unsigned long long writeSpaceRemaining;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)attemptWrite;
- (id)initWithSession:(id)a0 bufferSize:(unsigned long long)a1;
- (void)moveReadPtr:(unsigned long long)a0;
- (void)moveWritePtr:(unsigned long long)a0;

@end
