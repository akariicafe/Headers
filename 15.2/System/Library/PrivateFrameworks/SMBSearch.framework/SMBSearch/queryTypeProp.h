@class cdbProp, cbaseVariant;

@interface queryTypeProp : NSObject <WspPropertyProtocol>

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (void).cxx_destruct;
- (id)init;
- (unsigned int)propertyID;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;

@end
