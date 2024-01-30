@class cdbProp, cbaseVariant;

@interface rowQueryStatusProp : NSObject <WspPropertyProtocol>

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (void).cxx_destruct;
- (id)initWithInt:(int)a0;
- (unsigned int)propertyID;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;

@end
