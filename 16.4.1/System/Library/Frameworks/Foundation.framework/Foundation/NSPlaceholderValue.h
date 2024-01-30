@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (const char *)objCType;
- (id)retain;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (id)init;
- (id)autorelease;
- (unsigned long long)retainCount;

@end
