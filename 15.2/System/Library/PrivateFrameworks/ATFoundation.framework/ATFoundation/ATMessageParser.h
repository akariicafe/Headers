@class NSError, NSMutableData;

@interface ATMessageParser : NSObject {
    NSMutableData *_parserData;
    unsigned long long _curObjectLength;
    void *_objectDataBuffer;
    unsigned long long _objectDataLen;
    char _varIntBuf[10];
    unsigned long long _varIntDataLen;
}

@property (readonly, nonatomic) NSError *parserError;
@property (readonly, nonatomic) Class messageClass;
@property (copy, nonatomic) id /* block */ objectParsedBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMessageClass:(Class)a0;
- (BOOL)_parseObjectFromData:(id)a0;
- (BOOL)_parseObjectLength:(const char *)a0 length:(unsigned long long)a1 bytesConsumed:(unsigned long long *)a2;
- (BOOL)processData:(const char *)a0 length:(long long)a1;

@end
