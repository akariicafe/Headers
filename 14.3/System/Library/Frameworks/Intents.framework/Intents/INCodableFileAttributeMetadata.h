@class NSString, NSArray;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *customUTIs;
@property (readonly, nonatomic) NSArray *UTIs;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INCodableDescriptionCustomUTIsKey;
- (id)__INIntentResponseCodableDescriptionCustomUTIsKey;
- (id)__INTypeCodableDescriptionCustomUTIsKey;
- (void)encodeWithCoder:(id)a0;

@end
