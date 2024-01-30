@class NSString, LSRecord;

@interface ISRecordResourceProvider : ISResourceProvider

@property (readonly) LSRecord *record;
@property (retain) NSString *templateType;
@property (retain) NSString *fileExtension;

- (id)symbol;
- (void)resolveResources;
- (BOOL)_isAppleResource;
- (unsigned long long)iconShape;
- (id)templateIconResource;
- (id)iconResource;
- (id)initWithRecord:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)customRecipe;
- (id)resourceNamed:(id)a0;

@end
