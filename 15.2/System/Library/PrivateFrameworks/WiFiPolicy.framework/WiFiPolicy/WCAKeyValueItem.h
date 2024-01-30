@class NSString, NSDictionary, NSArray, NSData, NSError;

@interface WCAKeyValueItem : NSObject <NSSecureCoding> {
    id _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSArray *arrayValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) float floatValue;
@property (readonly, nonatomic) int int32Value;
@property (readonly, nonatomic) long long int64Value;
@property (readonly, nonatomic) unsigned int uint32Value;
@property (readonly, nonatomic) unsigned long long uint64Value;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSData *bytesValue;
@property (readonly, copy, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;
- (id)initWithKey:(id)a0 error:(id)a1;

@end
