@class NSString, NSNumber;

@interface EDAMOpenIdCredential : FATObject

@property (retain, nonatomic) NSString *tokenPayload;
@property (retain, nonatomic) NSNumber *serviceProvider;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
