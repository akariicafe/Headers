@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)autorelease;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (const char *)objCType;
- (unsigned long long)retainCount;
- (void)getValue:(void *)a0;
- (id)initWithCoder:(id)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)retain;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;

@end
