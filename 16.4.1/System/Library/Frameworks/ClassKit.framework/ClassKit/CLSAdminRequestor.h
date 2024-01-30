@class NSString, NSDictionary;

@interface CLSAdminRequestor : CLSObject {
    NSString *_verificationCode;
    NSString *_note;
}

@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSDictionary *serverRequestHeaders;
@property (copy, nonatomic) NSString *verificationCode;
@property (copy, nonatomic) NSString *note;

+ (BOOL)supportsSecureCoding;
+ (id)stringForVerificationState:(long long)a0;
+ (id)_propertyNames;
+ (id)identifierForRequestorEmail:(id)a0;
+ (long long)verificationStateFromString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)reset;
- (void)mergeWithObject:(id)a0;
- (id)initWithEmail:(id)a0;

@end
