@interface NSPort : NSObject <NSCopying, NSCoding>

@property (readonly, getter=isValid) BOOL valid;
@property (readonly) unsigned long long reservedSpaceLength;

+ (id)portWithMachPort:(unsigned int)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)port;

- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (id)initWithMachPort:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (unsigned int)machPort;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)replacementObjectForCoder:(id)a0;
- (id)delegate;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (Class)classForPortCoder;

@end
