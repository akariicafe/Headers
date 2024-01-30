@class NSString;
@protocol ENTTransport;

@interface ENTBinaryProtocol : NSObject <ENTProtocol>

@property (retain, nonatomic) id<ENTTransport> transport;
@property (nonatomic) BOOL strictRead;
@property (nonatomic) BOOL strictWrite;
@property (nonatomic) int messageSizeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeString:(id)a0;
- (id)initWithTransport:(id)a0;
- (void).cxx_destruct;
- (double)readDouble;
- (BOOL)readBool;
- (short)readI16;
- (int)readI32;
- (long long)readI64;
- (id)readString;
- (void)readMessageBeginReturningName:(id *)a0 type:(int *)a1 sequenceID:(int *)a2;
- (void)readMessageEnd;
- (void)readStructBeginReturningName:(id *)a0;
- (void)readStructEnd;
- (void)readFieldBeginReturningName:(id *)a0 type:(int *)a1 fieldID:(int *)a2;
- (void)readFieldEnd;
- (unsigned char)readByte;
- (id)readBinary;
- (void)readMapBeginReturningKeyType:(int *)a0 valueType:(int *)a1 size:(int *)a2;
- (void)readMapEnd;
- (void)readSetBeginReturningElementType:(int *)a0 size:(int *)a1;
- (void)readSetEnd;
- (void)readListBeginReturningElementType:(int *)a0 size:(int *)a1;
- (void)readListEnd;
- (void)writeMessageBeginWithName:(id)a0 type:(int)a1 sequenceID:(int)a2;
- (void)writeMessageEnd;
- (void)writeStructBeginWithName:(id)a0;
- (void)writeStructEnd;
- (void)writeFieldBeginWithName:(id)a0 type:(int)a1 fieldID:(int)a2;
- (void)writeI32:(int)a0;
- (void)writeI64:(long long)a0;
- (void)writeI16:(short)a0;
- (void)writeByte:(unsigned char)a0;
- (void)writeDouble:(double)a0;
- (void)writeBool:(BOOL)a0;
- (void)writeBinary:(id)a0;
- (void)writeFieldStop;
- (void)writeFieldEnd;
- (void)writeMapBeginWithKeyType:(int)a0 valueType:(int)a1 size:(int)a2;
- (void)writeMapEnd;
- (void)writeSetBeginWithElementType:(int)a0 size:(int)a1;
- (void)writeSetEnd;
- (void)writeListBeginWithElementType:(int)a0 size:(int)a1;
- (void)writeListEnd;
- (id)initWithTransport:(id)a0 strictRead:(BOOL)a1 strictWrite:(BOOL)a2;
- (id)readStringBody:(int)a0;

@end
