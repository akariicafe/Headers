@interface NGMRollingBitmaskBuffer : NSObject

@property unsigned int upper_buffer_index;
@property char *valid_values_buffer;
@property unsigned int valid_values_buffer_size;

- (id)bufferData;
- (id)init;
- (BOOL)processIncomingCounter:(unsigned int)a0;
- (void)dealloc;
- (id)initWithData:(id)a0 upperBufferIndex:(unsigned int)a1;

@end
