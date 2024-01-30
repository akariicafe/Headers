@class NSDate, NSString, TDThemeConstant, TDNamedElement, NSSet, TDRenditionKeySpec, TDSchemaPartDefinition, TDRenditionType, NSNumber;

@interface TDElementProduction : NSManagedObject

@property (retain, nonatomic) TDRenditionKeySpec *baseKeySpec;
@property (retain, nonatomic) TDRenditionType *renditionType;
@property (retain, nonatomic) TDThemeConstant *renditionSubtype;
@property (retain, nonatomic) TDThemeConstant *zeroCodeArtworkInfo;
@property (retain, nonatomic) NSString *comment;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *isExcludedFromFilter;
@property (retain, nonatomic) NSSet *renditions;
@property (retain, nonatomic) NSSet *tags;
@property (retain, nonatomic) NSString *universalTypeIdentifier;
@property (nonatomic) BOOL makeOpaqueIfPossible;
@property (retain, nonatomic) TDNamedElement *name;
@property (retain, nonatomic) TDSchemaPartDefinition *partDefinition;

- (id)relativePath;
- (id)associatedFileModificationDateWithDocument:(id)a0;
- (id)associatedFileURLWithDocument:(id)a0;
- (void)deleteRenditionsInDocument:(id)a0 shouldDeleteAssetFiles:(BOOL)a1;

@end
