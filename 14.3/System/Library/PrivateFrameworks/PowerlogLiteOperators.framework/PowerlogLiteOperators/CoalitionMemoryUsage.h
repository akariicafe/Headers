@interface CoalitionMemoryUsage : NSObject

@property unsigned long long wired_size;
@property unsigned long long purgeable_size;
@property unsigned long long phys_footprint_size;
@property unsigned long long compressed_size;
@property unsigned long long process_count;

@end
