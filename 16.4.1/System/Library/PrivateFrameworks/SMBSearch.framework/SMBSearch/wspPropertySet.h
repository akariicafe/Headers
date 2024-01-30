@class NSMutableArray;

@interface wspPropertySet : NSObject {
    struct network_uuid { unsigned int u1; unsigned short u2; unsigned short u3; unsigned char u4[8]; } propSetGuid;
}

@property int propsetID;
@property (retain) NSMutableArray *propArr;

- (void)addProperty:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)propertyCount;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithPropSetID:(int)a0;
- (id)propertyForPropID:(unsigned int)a0;

@end
