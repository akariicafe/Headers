@class NSString, NSArray, INCodableAttribute, NSNumber;

@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying>

@property (readonly, nonatomic) BOOL isEnum;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long tag;
@property (readonly, copy, nonatomic) NSString *facadePropertyName;
@property (readonly, copy, nonatomic) NSString *dataPropertyName;
@property (readonly, nonatomic) long long valueType;
@property (readonly, nonatomic) long long valueStyle;
@property (readonly, nonatomic) BOOL isExtended;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) SEL resolveSelector;
@property (readonly, nonatomic) SEL deprecatedResolveSelector;
@property (readonly, copy, nonatomic) NSArray *resolveSelectorStrings;
@property (readonly, copy, nonatomic) NSArray *provideOptionsSelectorStrings;
@property (readonly, copy, nonatomic) NSArray *defaultValueSelectorStrings;
@property (readonly, copy, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, nonatomic) Class resolutionResultClass;
@property (retain, nonatomic) NSNumber *rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 tag:(unsigned long long)a1 facadePropertyName:(id)a2 dataPropertyName:(id)a3 isExtended:(BOOL)a4 isPrivate:(BOOL)a5 valueType:(long long)a6 valueStyle:(long long)a7 defaultValueSelectorStrings:(id)a8 provideOptionsSelectorStrings:(id)a9 resolutionResultClass:(Class)a10 resolveSelectors:(SEL)a11;
- (id)valueForSlotComposer:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizeValue:(id)a0 forLanguage:(id)a1;
- (void)setValue:(id)a0 forSlotComposer:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 tag:(unsigned long long)a1 facadePropertyName:(id)a2 dataPropertyName:(id)a3 isExtended:(BOOL)a4 isPrivate:(BOOL)a5 valueType:(long long)a6 valueStyle:(long long)a7 codableAttribute:(id)a8 defaultValueSelectorStrings:(id)a9 provideOptionsSelectorStrings:(id)a10 resolutionResultClass:(Class)a11 resolveSelectors:(SEL)a12;
- (id)initWithName:(id)a0 tag:(unsigned long long)a1 facadePropertyName:(id)a2 dataPropertyName:(id)a3 valueType:(long long)a4 valueStyle:(long long)a5 isExtended:(BOOL)a6 isPrivate:(BOOL)a7 resolveSelectors:(SEL)a8;
- (void).cxx_destruct;
- (id)localizeValue:(id)a0 withLocalizer:(id)a1;

@end
