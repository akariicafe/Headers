@class NSNumber, NSString;

@interface EDAMAuthenticationRequestResult : FATObject

@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *userEmail;
@property (retain, nonatomic) NSNumber *result;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
