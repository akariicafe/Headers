@class NSString;

@interface SAMLNameIdPolicy : SAMLBaseElement

@property (readonly, nonatomic) NSString *format;
@property (readonly, nonatomic) NSString *allowCreation;

+ (id)createElement:(id *)a0;

@end
