@class NSString, HKUserDomainConceptTypeIdentifier;

@interface HKUserDomainConceptSemanticIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HKUserDomainConceptTypeIdentifier *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)initWithTypeIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
