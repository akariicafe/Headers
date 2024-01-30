@class NSArray, NSSet, NSString;

@interface ECAuthScheme : NSObject

@property (class, readonly, copy) NSArray *knownSchemes;

@property (readonly, copy, nonatomic) NSSet *supportedSASLMechanisms;
@property (readonly, nonatomic) BOOL requiresUsername;
@property (readonly, nonatomic) BOOL requiresPassword;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *humanReadableName;
@property (readonly, nonatomic) unsigned int applescriptScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)schemeWithName:(id)a0;
+ (id)schemeWithApplescriptScheme:(unsigned int)a0;

@end
