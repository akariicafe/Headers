@class NSString, NSURL;

@interface INTermsAndConditions : NSObject <INTermsAndConditionsExport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedTermsAndConditionsText;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;
@property (readonly, nonatomic) NSURL *termsAndConditionsURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocalizedTermsAndConditionsText:(id)a0 privacyPolicyURL:(id)a1 termsAndConditionsURL:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
