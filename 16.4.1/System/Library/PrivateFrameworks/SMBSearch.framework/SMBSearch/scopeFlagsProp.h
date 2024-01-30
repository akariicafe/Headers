@class cdbProp, cbaseVariant;

@interface scopeFlagsProp : NSObject <WspPropertyProtocol>

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (void).cxx_destruct;
- (unsigned int)propertyID;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithScopeFlagsArr:(id)a0 UseExtBTypes:(BOOL)a1;

@end
