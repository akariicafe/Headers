@class NSString, NSNumber;

@interface EDAMRegistrationRequestResult : FATObject

@property (retain, nonatomic) NSString *refreshToken;
@property (retain, nonatomic) NSString *userEmail;
@property (retain, nonatomic) NSNumber *result;
@property (retain, nonatomic) NSString *name;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
