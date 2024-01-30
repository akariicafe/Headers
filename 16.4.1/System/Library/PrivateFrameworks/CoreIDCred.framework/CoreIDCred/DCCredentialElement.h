@class NSString, NSArray, NSData, NSDate, NSNumber, NSDictionary;

@interface DCCredentialElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *elementIdentifier;
@property (retain) NSString *stringValue;
@property (retain) NSData *dataValue;
@property (retain) NSDate *dateValue;
@property (retain) NSNumber *numberValue;
@property (retain) NSArray *arrayValue;
@property (retain) NSDictionary *dictionaryValue;
@property unsigned long long numericTypeHint;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithElementIdentifier:(id)a0;
- (id)initWithElementIdentifier:(id)a0 dataValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 arrayValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 boolValue:(BOOL)a1;
- (id)initWithElementIdentifier:(id)a0 dateValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 dictionaryValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 doubleValue:(double)a1;
- (id)initWithElementIdentifier:(id)a0 intValue:(long long)a1;
- (id)initWithElementIdentifier:(id)a0 stringValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 stringValue:(id)a1 dataValue:(id)a2 dateValue:(id)a3 numberValue:(id)a4 arrayValue:(id)a5 dictionaryValue:(id)a6 numericTypeHint:(unsigned long long)a7;

@end
