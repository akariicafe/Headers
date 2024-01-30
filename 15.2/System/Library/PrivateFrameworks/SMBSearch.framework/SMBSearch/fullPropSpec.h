@interface fullPropSpec : NSObject {
    struct network_uuid { unsigned int u1; unsigned short u2; unsigned short u3; unsigned char u4[8]; } propGuid;
}

@property int propNumber;
@property unsigned int ulKind;
@property unsigned int propID;

- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithPropertyNumber:(int)a0;

@end
