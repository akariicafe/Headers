@class NSString, NSDictionary;

@interface BCAuthenticationLabels : NSObject <BCDictionarySerializable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *action;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 action:(id)a2;

@end
