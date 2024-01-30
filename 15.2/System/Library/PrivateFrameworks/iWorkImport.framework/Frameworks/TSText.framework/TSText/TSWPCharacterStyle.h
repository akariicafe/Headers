@class NSString;

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)emphasisProperties;
+ (id)nullStyleName;
+ (id)nonEmphasisCharacterProperties;
+ (id)nullStyleWithContext:(id)a0;

- (int)writingDirection;
- (BOOL)transformsFontSizes;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)archivableRepresentationOfChangeSet:(id)a0;

@end
