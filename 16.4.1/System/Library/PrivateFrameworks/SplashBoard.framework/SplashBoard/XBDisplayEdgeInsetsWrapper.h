@class NSString;

@interface XBDisplayEdgeInsetsWrapper : NSObject <NSCopying, BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double topInset;
@property (readonly, nonatomic) double leftInset;
@property (readonly, nonatomic) double bottomInset;
@property (readonly, nonatomic) double rightInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeWithEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTop:(double)a0 left:(double)a1 bottom:(double)a2 right:(double)a3;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasZeroInsets;

@end
