@interface VMUVMRegionRangeInfo : NSObject

@property unsigned long long address;
@property unsigned long long size;
@property (readonly) struct _VMURange { unsigned long long x0; unsigned long long x1; } range;
@property unsigned long long stackIdentifier;
@property unsigned int userTag;

- (id)init;

@end
