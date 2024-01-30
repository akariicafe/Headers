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
- (double)readDouble;
- (id)initWithTransport:(id)a0;
- (BOOL)readBool;
- (void).cxx_destruct;
- (id)readString;
- (unsigned char)readByte;
- (int)readI32;
- (id)readStringBody:(int)a0;
- (void)writeMessageEnd;
- (short)readI16;
- (long long)readI64;
- (id)initWithTransport:(id)a0 strictRead:(BOOL)a1 strictWrite:(BOOL)a2;
- (id)readBinary;
- (void)readFieldBeginReturningName:(id *)a0 type:(int *)a1 fieldID:(int *)a2;
- (void)readFieldEnd;
- (void)readListBeginReturningElementType:(int *)a0 size:(int *)a1;
- (void)readListEnd;
- (void)readMapBeginReturningKeyType:(int *)a0 valueType:(int *)a1 size:(int *)a2;
- (void)readMapEnd;
- (void)readMessageBeginReturningName:(id *)a0 type:(int *)a1 sequenceID:(int *)a2;
- (void)readMessageEnd;
- (void)readSetBeginReturningElementType:(int *)a0 size:(int *)a1;
- (void)readSetEnd;
- (void)readStructBeginReturningName:(id *)a0;
- (void)readStructEnd;
- (void)writeBinary:(id)a0;
- (void)writeBool:(BOOL)a0;
- (void)writeByte:(unsigned char)a0;
- (void)writeDouble:(double)a0;
- (void)writeFieldBeginWithName:(id)a0 type:(int)a1 fieldID:(int)a2;
- (void)writeFieldEnd;
- (void)writeFieldStop;
- (void)writeI16:(short)a0;
- (void)writeI32:(int)a0;
- (void)writeI64:(long long)a0;
- (void)writeListBeginWithElementType:(int)a0 size:(int)a1;
- (void)writeListEnd;
- (void)writeMapBeginWithKeyType:(int)a0 valueType:(int)a1 size:(int)a2;
- (void)writeMapEnd;
- (void)writeMessageBeginWithName:(id)a0 type:(int)a1 sequenceID:(int)a2;
- (void)writeSetBeginWithElementType:(int)a0 size:(int)a1;
- (void)writeSetEnd;
- (void)writeStructBeginWithName:(id)a0;
- (void)writeStructEnd;

@end
