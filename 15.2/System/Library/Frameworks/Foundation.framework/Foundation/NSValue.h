@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) const char *objCType;

+ (id)valueWithPointer:(const void *)a0;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)valueWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;
+ (id)valueWithPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)valueWithWeakObject:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
+ (id)valueWithNonretainedObject:(id)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;

- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)isEqualToValue:(id)a0;
- (void)getValue:(void *)a0;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeValue;
- (void *)pointerValue;
- (struct CGPoint { double x0; double x1; })pointValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectValue;
- (struct CGSize { double x0; double x1; })sizeValue;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isNSValue__;
- (id)description;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsValue;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nonretainedObjectValue;
- (id)weakObjectValue;
- (unsigned long long)hash;

@end
