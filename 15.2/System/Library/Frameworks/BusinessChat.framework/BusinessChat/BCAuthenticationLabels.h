@class NSString, NSDictionary;

@interface BCAuthenticationLabels : NSObject <BCDictionarySerializable, NSSecureCoding> {
    NSString *_title;
    NSString *_subtitle;
    NSString *_action;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *action;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 action:(id)a2;

@end
