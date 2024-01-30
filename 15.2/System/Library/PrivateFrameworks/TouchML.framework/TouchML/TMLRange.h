@interface TMLRange : NSObject <TMLRangeJSExports, NSCopying> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) unsigned long long length;

+ (void)initializeJSContext:(id)a0;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)NSRangeValue;

@end
