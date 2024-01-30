@class NSString, NSURL;

@interface STContactAddress : STSiriModelObject {
    long long _type;
    NSString *_stringValue;
    NSURL *_contactIdentifier;
    NSString *_contactInternalGUID;
}

+ (BOOL)supportsSecureCoding;

- (id)stringValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 stringValue:(id)a1 contactIdentifier:(id)a2 contactInternalGUID:(id)a3;
- (id)contactInternalGUID;
- (id)contactIdentifier;
- (id)_aceContextObjectValue;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)initWithStringValue:(id)a0;

@end
