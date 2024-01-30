@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) const char *objCType;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)valueWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)valueWithWeakObject:(id)a0;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;
+ (id)valueWithNonretainedObject:(id)a0;
+ (id)valueWithPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
+ (id)valueWithPointer:(const void *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;

- (BOOL)isNSValue__;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeValue;
- (id)nonretainedObjectValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectValue;
- (struct CGSize { double x0; double x1; })sizeValue;
- (id)init;
- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)weakObjectValue;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (void *)pointerValue;
- (void)getValue:(void *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsValue;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })pointValue;
- (BOOL)isEqual:(id)a0;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
