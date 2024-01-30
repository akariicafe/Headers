@class NSString, TSUBezierPath;

@interface KNAnimParameterSavedParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) TSUBezierPath *pathValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) BOOL hasMaxValue;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) BOOL removed;
@property (nonatomic) BOOL debugOnly;
@property (copy, nonatomic) NSString *parameterDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)p_bezierPathFromSavedPathElements:(id)a0;
- (id)p_savedPathFromPath:(id)a0;

@end
