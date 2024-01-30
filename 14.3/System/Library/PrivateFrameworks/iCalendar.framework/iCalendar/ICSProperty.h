@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSSecureCoding, ICSWriting> {
    NSMutableDictionary *_parameters;
    unsigned long long _type;
    id _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setParameters:(id)a0;
- (id)parameters;
- (void)addParametersFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)parameterValueForName:(id)a0;
- (void)setParameterValue:(id)a0 forName:(id)a1;
- (void)setValue:(id)a0 type:(unsigned long long)a1;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (id)allParameters;
- (id)value;
- (BOOL)isMultiValued;
- (id)initWithCoder:(id)a0;
- (id)description;
- (unsigned long long)type;
- (id)stringValue;
- (id)initWithValue:(id)a0 type:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)propertiesToIncludeForChecksumVersion:(int)a0;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)a0;
- (id)propertiesToObscure;
- (void)ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)parametersToIncludeForChecksumVersion:(int)a0;
- (id)parametersToObscure;
- (BOOL)shouldObscureValue;
- (void)removeParameterValueForName:(id)a0;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (BOOL)alwaysHasParametersToSerialize;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1 additionalParameters:(id)a2;
- (void)_appendDateTimeInDate:(id)a0 asUTCToResult:(id)a1;
- (void)addParameter:(id)a0 withRawValue:(id)a1 options:(unsigned long long)a2;
- (void)setValueAsProperty:(id)a0 withRawValue:(const char *)a1 options:(unsigned long long)a2;
- (void)_setParsedValues:(id)a0 type:(unsigned long long)a1;

@end
