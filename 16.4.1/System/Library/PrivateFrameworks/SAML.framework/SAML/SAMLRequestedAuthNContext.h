@class NSString;

@interface SAMLRequestedAuthNContext : SAMLBaseElement

@property (readonly, nonatomic) NSString *comparison;
@property (readonly, nonatomic) NSString *classRef;
@property (readonly, nonatomic) NSString *declRef;

+ (id)createElement:(id *)a0;

@end
