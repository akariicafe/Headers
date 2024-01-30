@class NSString, NSArray;

@interface _AUStaticParameterInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float minValue;
@property (nonatomic) float maxValue;
@property (nonatomic) unsigned int unit;
@property (retain, nonatomic) NSString *unitName;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSArray *valueStrings;
@property (nonatomic) unsigned int clumpID;
@property (nonatomic) float defaultValue;
@property (nonatomic) unsigned int originalOrder;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
