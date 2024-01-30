@class cdbProp, cbaseVariant;

@interface cmdLocaleStrProp : NSObject <WspPropertyProtocol>

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (void).cxx_destruct;
- (unsigned int)propertyID;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithLocaleStr:(id)a0;
- (void)set_dbpropOptions:(unsigned int)a0;

@end
