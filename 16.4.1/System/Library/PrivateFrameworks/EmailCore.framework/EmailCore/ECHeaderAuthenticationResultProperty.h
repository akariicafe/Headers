@class NSString;

@interface ECHeaderAuthenticationResultProperty : NSObject {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSString *fullProperty;
@property (readonly, copy, nonatomic) NSString *propertyType;
@property (readonly, copy, nonatomic) NSString *property;
@property (readonly, copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithPropertyType:(id)a0 property:(id)a1 value:(id)a2;

@end
