@class NSArray, HKOntologyEducationContentSection;

@interface HKOntologyEducationContent : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) long long count;
@property (readonly, copy, nonatomic) HKOntologyEducationContentSection *primarySection;

+ (id)educationContentWithPropertyCollection:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSections:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)firstSectionWithType:(long long)a0;
- (id)allSectionsWithType:(long long)a0;
- (id)allSectionsAsProperties;

@end
