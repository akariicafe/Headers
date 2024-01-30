@class NSString;
@protocol MTLBuffer;

@interface FigMetalAllocatorDescriptor : NSObject

@property (retain, nonatomic) id<MTLBuffer> externalBuffer;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long memSize;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) BOOL wireMemory;
@property (nonatomic) BOOL allowFallback;
@property (nonatomic) int compressionLevel;

- (void).cxx_destruct;
- (id)init;

@end
