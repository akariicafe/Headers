@class NSNumber, NSString, NSDictionary;

@interface BCError : NSObject <BCDictionarySerializable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCode:(id)a0 domain:(id)a1 message:(id)a2;

@end
