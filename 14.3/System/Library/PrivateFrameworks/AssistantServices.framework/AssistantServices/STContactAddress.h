@class NSString, NSURL;

@interface STContactAddress : STSiriModelObject {
    long long _type;
    NSString *_stringValue;
    NSURL *_contactIdentifier;
    NSString *_contactInternalGUID;
}

+ (BOOL)supportsSecureCoding;

- (id)contactIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)type;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)initWithStringValue:(id)a0;
- (id)stringValue;
- (id)contactInternalGUID;
- (id)initWithType:(long long)a0 stringValue:(id)a1 contactIdentifier:(id)a2 contactInternalGUID:(id)a3;
- (id)_aceContextObjectValue;
- (void)encodeWithCoder:(id)a0;

@end
