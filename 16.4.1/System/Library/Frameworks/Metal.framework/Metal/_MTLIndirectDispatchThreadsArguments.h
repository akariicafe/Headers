@interface _MTLIndirectDispatchThreadsArguments : NSObject

@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerGrid;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup;

@end
