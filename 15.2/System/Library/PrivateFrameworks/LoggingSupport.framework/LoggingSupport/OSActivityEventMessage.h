@class NSString, NSMutableArray, NSData;

@interface OSActivityEventMessage : OSActivityEvent {
    NSData *_bufferPrivateData;
    NSData *_bufferData;
}

@property (readonly, nonatomic) NSMutableArray *arguments;
@property (readonly, copy) NSString *format;

- (void).cxx_destruct;
- (void)fillEventData:(const char *)a0 length:(unsigned long long)a1 privateBuffer:(const char *)a2 length:(unsigned long long)a3;

@end
