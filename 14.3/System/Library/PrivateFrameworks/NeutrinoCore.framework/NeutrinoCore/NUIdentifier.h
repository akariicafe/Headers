@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>

@property (readonly) NSString *nameSpace;
@property (readonly) NSString *name;
@property (readonly) NUVersion *version;
@property (readonly) NSString *stringRepresentation;

+ (id)defaultNameSpace;
+ (BOOL)validateName:(id)a0 error:(out id *)a1;
+ (id)latestIdentifierWithName:(id)a0;
+ (id)latestIdentifierWithNameSpace:(id)a0 name:(id)a1;
+ (id)identifierWithString:(id)a0 error:(out id *)a1;
+ (BOOL)validateIdentifierString:(id)a0 error:(out id *)a1;
+ (BOOL)validateIdentifierString:(id)a0 space:(out id *)a1 name:(out id *)a2 version:(out id *)a3 error:(out id *)a4;
+ (id)identifierRegularExpression;
+ (BOOL)validateNameSpace:(id)a0 error:(out id *)a1;
+ (id)validNameSpaceRegularExpression;
+ (id)validNameRegularExpression;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToIdentifier:(id)a0;
- (id)debugDescription;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 version:(id)a1;
- (id)initWithNameSpace:(id)a0 name:(id)a1 version:(id)a2;
- (id)identifierWithVersion:(id)a0;

@end
