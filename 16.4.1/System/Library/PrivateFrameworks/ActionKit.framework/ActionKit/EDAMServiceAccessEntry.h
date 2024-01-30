@class NSNumber, NSString;

@interface EDAMServiceAccessEntry : FATObject

@property (retain, nonatomic) NSNumber *accessTime;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *authenticatedClientUserId;
@property (retain, nonatomic) NSNumber *apiKeyId;
@property (retain, nonatomic) NSNumber *businessAdmin;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
