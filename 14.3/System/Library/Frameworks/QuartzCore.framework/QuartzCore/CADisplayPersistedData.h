@class NSString, NSMutableArray;

@interface CADisplayPersistedData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *latencies;
@property (retain, nonatomic) NSMutableArray *preferredModes;

+ (id)sharedInstance;
+ (id)supportedClasses;

- (id)init;
- (void)save;
- (void)dealloc;
- (void)update;
- (id)initWithCoder:(id)a0;
- (id)description;
- (double)latencyForUUID:(id)a0 andMode:(struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 24; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; } x0; unsigned long long x1; } x0; })a1;
- (void)setLatency:(double)a0 forUUID:(id)a1 andMode:(struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 24; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; } x0; unsigned long long x1; } x0; })a2;
- (void)setPreferredMode:(struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 24; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; } x0; unsigned long long x1; } x0; })a0 forUUID:(id)a1;
- (struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 24; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; } x0; unsigned long long x1; } x0; })preferredModeForUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
