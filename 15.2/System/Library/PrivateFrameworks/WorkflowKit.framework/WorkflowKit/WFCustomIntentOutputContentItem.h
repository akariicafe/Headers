@class INCustomObject;

@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) INCustomObject *customObject;

+ (BOOL)supportsSecureCoding;
+ (id)codableDescription;
+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;

- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;

@end
