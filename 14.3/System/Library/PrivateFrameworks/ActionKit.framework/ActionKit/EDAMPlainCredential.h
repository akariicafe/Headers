@class NSNumber, NSString;

@interface EDAMPlainCredential : FATObject

@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *password;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
