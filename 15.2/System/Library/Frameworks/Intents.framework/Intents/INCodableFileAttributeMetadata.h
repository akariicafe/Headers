@class NSString, NSArray;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *customUTIs;
@property (readonly, nonatomic) NSArray *UTIs;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionCustomUTIsKey;
- (void).cxx_destruct;
- (id)__INCodableDescriptionCustomUTIsKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionCustomUTIsKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;

@end
