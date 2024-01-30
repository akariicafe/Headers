@interface _SYQuiescenceAllocation : NSObject

@property (nonatomic) void *returnAddress;
@property (weak, nonatomic) id object;

- (void).cxx_destruct;

@end
