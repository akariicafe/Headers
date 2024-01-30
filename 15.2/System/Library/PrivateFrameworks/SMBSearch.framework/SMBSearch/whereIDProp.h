@class cdbProp, cbaseVariant;

@interface whereIDProp : NSObject <WspPropertyProtocol>

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (void).cxx_destruct;
- (unsigned int)propertyID;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithUInt:(unsigned int)a0;

@end
