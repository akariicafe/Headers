@class NSString;

@interface SAMLIDPEntry : SAMLBaseElement

@property (readonly, nonatomic) NSString *providerId;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *loc;

+ (id)createElement:(id *)a0;

@end
