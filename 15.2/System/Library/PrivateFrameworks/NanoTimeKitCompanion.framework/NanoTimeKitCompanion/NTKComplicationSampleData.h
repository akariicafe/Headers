@class NSString, NSMutableDictionary, NSMutableSet;

@interface NTKComplicationSampleData : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_familyToTemplate;
    NSMutableDictionary *_familyToTemplatePath;
    NSMutableSet *_supportedFamilies;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *applicationID;
@property (nonatomic) BOOL encodesTemplatesAsPaths;

- (id)supportedFamilies;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (id)_decodedTemplateFromPath:(id)a0;
- (BOOL)_validateTemplatesExist;
- (void)_decodeAllTemplates;
- (void)setTemplate:(id)a0 forFamily:(long long)a1;
- (id)initWithSupportedFamilies:(id)a0;
- (id)templateForFamily:(long long)a0;
- (id)templatePathForFamily:(long long)a0;
- (void)setTemplatePath:(id)a0 forFamily:(long long)a1;
- (id)decodedCopy;

@end
