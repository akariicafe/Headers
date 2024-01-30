@class NSDictionary, NSString;

@interface NSMorphologyCustomPronoun : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *_externalRepresentationDictionary;
@property (copy, nonatomic) NSString *subjectForm;
@property (copy, nonatomic) NSString *objectForm;
@property (copy, nonatomic) NSString *possessiveForm;
@property (copy, nonatomic) NSString *possessiveAdjectiveForm;
@property (copy, nonatomic) NSString *reflexiveForm;

+ (BOOL)_validateCustomPronounWithAccessor:(id /* block */)a0 forLanguage:(id)a1 error:(id *)a2;
+ (id)requiredKeysForLanguage:(id)a0;
+ (BOOL)isSupportedForLanguage:(id)a0;

- (BOOL)_autocompleteEnglishPronounFromSubjectForm;
- (id)_initWithExternalRepresentationDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_externalRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
