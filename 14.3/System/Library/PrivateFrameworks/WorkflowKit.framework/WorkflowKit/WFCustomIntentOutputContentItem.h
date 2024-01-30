@class INCustomObject;

@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) INCustomObject *customObject;

+ (id)typeDescription;
+ (id)codableDescription;
+ (BOOL)supportsSecureCoding;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;

- (Class)classForKeyedArchiver;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;

@end
