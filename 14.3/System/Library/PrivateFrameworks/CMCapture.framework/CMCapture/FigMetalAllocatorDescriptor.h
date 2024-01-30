@class NSString;
@protocol MTLBuffer;

@interface FigMetalAllocatorDescriptor : NSObject

@property (retain, nonatomic) id<MTLBuffer> externalBuffer;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long memSize;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) BOOL dryRun;
@property (nonatomic) BOOL wireMemory;

- (id)init;
- (void).cxx_destruct;

@end
