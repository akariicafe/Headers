@class NSString;

@interface MTLArchitecture : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *revision;
@property (readonly) int cpuType;
@property (readonly) int cpuSubtype;

- (void)dealloc;
- (id)initWithCPUType:(int)a0 cpuSubtype:(int)a1;
- (id)initWithCPUType:(int)a0 cpuSubtype:(int)a1 revision:(id)a2;

@end
