@class NSMutableData;

@interface PollPostProcessBuffer : NSObject

@property unsigned int srcBufferPrevOffset;
@property unsigned int srcBufferPrevSize;
@property (readonly) NSMutableData *dstBuffer;

- (id)init;
- (void)reset;
- (void)dealloc;

@end
