@class NSString;

@interface LACustomPasswordRequirement : NSObject <LAACLSerializable> {
    NSString *_password;
}

+ (void)requestCreationWithLocalizedReason:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)encodeWithACLCoder:(id)a0;
- (id)initWithCustomPassword:(id)a0;

@end
