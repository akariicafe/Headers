@interface cdbProp : NSObject {
    struct network_uuid { unsigned int u1; unsigned short u2; unsigned short u3; unsigned char u4[8]; } colidGuid;
}

@property unsigned int dbPropId;
@property unsigned int dbPropOptions;
@property unsigned int dbPropStatus;
@property unsigned int colidEKind;
@property unsigned int colidULID;

- (id)initWithPropID:(unsigned int)a0;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (void)setTimeMidGuid;

@end
