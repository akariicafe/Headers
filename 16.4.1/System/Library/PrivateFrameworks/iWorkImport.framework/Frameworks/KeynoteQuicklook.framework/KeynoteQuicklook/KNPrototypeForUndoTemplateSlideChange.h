@class KNTemplateSlide, NSArray, NSDictionary, KNSlideStyle, NSString, NSUUID;

@interface KNPrototypeForUndoTemplateSlideChange : TSPObject <TSSPropertySource> {
    NSUUID *_templateSlideId;
    NSArray *_drawableInfoIdList;
    NSArray *_placeholderTagsList;
}

@property (retain, nonatomic) KNSlideStyle *slideStyle;
@property (readonly, nonatomic) KNTemplateSlide *templateSlide;
@property (readonly, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSArray *placeholders;
@property (readonly, nonatomic) NSDictionary *placeholdersForTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blobWithSlide:(id)a0;

- (id)objectForProperty:(int)a0;
- (void)dealloc;
- (id)initWithSlide:(id)a0;
- (BOOL)containsProperty:(int)a0;
- (float)floatValueForProperty:(int)a0;
- (double)CGFloatValueForProperty:(int)a0;
- (id)boxedObjectForProperty:(int)a0;
- (double)doubleValueForProperty:(int)a0;
- (int)intValueForProperty:(int)a0;
- (void)saveToArchiver:(id)a0;
- (void)didInitFromSOS;
- (void)loadFromUnarchiver:(id)a0;
- (void)migrateStyles;
- (void)rebuildChildInfosAndPlaceholdersFromMaster:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
