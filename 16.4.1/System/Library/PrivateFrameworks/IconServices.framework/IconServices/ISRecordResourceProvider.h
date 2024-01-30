@class NSString, LSRecord;

@interface ISRecordResourceProvider : ISResourceProvider

@property (readonly) LSRecord *record;
@property (retain) NSString *templateType;
@property (retain) NSString *fileExtension;

- (id)resourceNamed:(id)a0;
- (id)symbol;
- (void).cxx_destruct;
- (BOOL)_isAppleResource;
- (id)customRecipe;
- (id)iconResource;
- (unsigned long long)iconShape;
- (id)initWithRecord:(id)a0 options:(unsigned long long)a1;
- (BOOL)onlySupportsGraphicIcons;
- (void)resolveResources;
- (BOOL)supportsGraphicIcons;
- (id)templateIconResource;

@end
