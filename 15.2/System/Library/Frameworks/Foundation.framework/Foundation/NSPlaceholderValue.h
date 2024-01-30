@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (const char *)objCType;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (void)getValue:(void *)a0;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
