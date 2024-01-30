@class NSString;

@interface IOAccelMemoryPoolTotals : NSObject

@property (retain) NSString *device_name;
@property (retain) NSString *pool;
@property unsigned long long allocatedSize;
@property unsigned long long residentSize;
@property unsigned long long wiredSize;
@property unsigned long long dirtySize;
@property unsigned long long purgeableSize;
@property unsigned long long nonpurgeableSize;
@property unsigned long long orphanedSize;

- (void)dealloc;

@end
