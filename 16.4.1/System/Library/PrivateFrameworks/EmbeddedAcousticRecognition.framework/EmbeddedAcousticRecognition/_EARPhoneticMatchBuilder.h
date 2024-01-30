@interface _EARPhoneticMatchBuilder : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::TextTokenizer> { struct TextTokenizer *__ptr_; struct __shared_weak_count *__cntrl_; } tokenizer;
@property (readonly, nonatomic) struct shared_ptr<quasar::PMBuilder> { struct PMBuilder *__ptr_; struct __shared_weak_count *__cntrl_; } pmBuilder;

+ (BOOL)writePlaceholderFstToPath:(id)a0;
+ (BOOL)writePlaceholderSymbolsToPath:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)buildAlignedLFst;
- (BOOL)buildGFsts;
- (BOOL)buildLFst;
- (BOOL)combineFsts;
- (BOOL)composeLGFsts;
- (id)initWithModelRoot:(id)a0 jsonConfigFile:(id)a1 dataFeeds:(id)a2;
- (id)initWithModelRoot:(id)a0 jsonConfigFile:(id)a1 dataFeedsFile:(id)a2;
- (id)initWithNcsRoot:(id)a0 jsonConfigFile:(id)a1 dataFeeds:(id)a2;
- (id)initWithNcsRoot:(id)a0 jsonConfigFile:(id)a1 dataFeedsFile:(id)a2;
- (id)lFstName;
- (id)lgFstName;
- (id)osymsName;
- (BOOL)supportPhoneticMatchBuilding;
- (BOOL)writeAlignedLFstToPath:(id)a0;
- (BOOL)writeGFstsToDirectory:(id)a0;
- (BOOL)writeISymsToPath:(id)a0 asText:(BOOL)a1;
- (BOOL)writeIndividualLGFstsToDirectory:(id)a0;
- (BOOL)writeLFstToPath:(id)a0;
- (BOOL)writeLGFstToPath:(id)a0;
- (BOOL)writeMetadataToPath:(id)a0;
- (BOOL)writeOSymsToPath:(id)a0 asText:(BOOL)a1 quasarise:(BOOL)a2;

@end
