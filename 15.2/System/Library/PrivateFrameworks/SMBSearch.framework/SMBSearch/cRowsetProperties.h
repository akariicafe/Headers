@interface cRowsetProperties : NSObject

@property unsigned int booleanOptions;
@property unsigned int maxOpenRows;
@property unsigned int memoryUsage;
@property unsigned int maxResult;
@property unsigned int cmdTimeout;

- (id)init;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;

@end
