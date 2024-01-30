@class NSArray, NSMutableDictionary, NSDictionary;

@interface MLParameterContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *currentParameterValues;
@property (retain, nonatomic) NSArray *parameterKeys;
@property (retain, nonatomic) NSDictionary *parameterDescriptions;

+ (id)parameterContainerFor:(id)a0 descriptions:(id)a1;

- (BOOL)setCurrentValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)validateParameterValue:(id)a0 givenConstraint:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
