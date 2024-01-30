@class TSDCommentStorage, NSString, TSTCellSpec, TSSStyle, TSUCustomFormat, TSTConditionalStyleSet, NSObject, TSWPStorage, TSTImportWarningSet, TSTPopUpMenuModel, TSKFormat;
@protocol TSTTableDataPayloadHashing;

@interface TSTTableDataObject : NSObject <TSPCopying>

@property (readonly, nonatomic) unsigned int refCount;
@property (readonly, nonatomic) unsigned long long byteSizeForArchiving;
@property (nonatomic) unsigned int key;
@property (retain, nonatomic) NSObject<TSTTableDataPayloadHashing> *payload;
@property (readonly, nonatomic) TSDCommentStorage *commentStorage;
@property (readonly, nonatomic) TSTConditionalStyleSet *conditionalStyleSet;
@property (readonly, nonatomic) TSUCustomFormat *customFormat;
@property (readonly, nonatomic) TSKFormat *format;
@property (readonly, nonatomic) TSTCellSpec *cellSpec;
@property (readonly, nonatomic) TSWPStorage *formulaError;
@property (readonly, nonatomic) TSTImportWarningSet *importWarningSet;
@property (readonly, nonatomic) TSTPopUpMenuModel *popUpMenuModel;
@property (readonly, nonatomic) TSWPStorage *richTextStorage;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) TSSStyle *style;

+ (void)loadObjectFromArchive:(const void *)a0 listType:(int)a1 unarchiver:(id)a2 completion:(id /* block */)a3;
+ (id)objectWithRefCount:(unsigned int)a0;

- (id)format;
- (id)string;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)style;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)commentStorage;
- (id)cellSpec;
- (BOOL)dropReferences:(unsigned int)a0;
- (id)richTextStorage;
- (void)takeReferences:(unsigned int)a0;
- (void)addReferencesFromObject:(id)a0;
- (id)conditionalStyleSet;
- (id)customFormat;
- (BOOL)dropReference;
- (unsigned long long)estimateByteSize;
- (id)formulaError;
- (id)importWarningSet;
- (id)initWithRefCount:(unsigned int)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;
- (void)p_sharedInitWithRefCount:(unsigned int)a0 key:(unsigned int)a1;
- (id)popUpMenuModel;
- (void)sharedLoadFromArchive:(const void *)a0;
- (void)takeReference;

@end
