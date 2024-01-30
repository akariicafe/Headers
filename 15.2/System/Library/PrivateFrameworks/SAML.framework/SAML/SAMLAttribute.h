@class NSString, NSArray;

@interface SAMLAttribute : SAMLBaseElement

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *nameFormat;
@property (readonly, nonatomic) NSString *friendlyName;
@property (readonly, nonatomic) NSArray *values;

+ (id)createElement:(id *)a0;

- (void)addAttributeValue:(id)a0;

@end
