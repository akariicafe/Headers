@class NSString;

@interface VTKeywordDetectorContext : NSObject

@property (readonly, nonatomic) NSString *assetPath;
@property (readonly, nonatomic) NSString *categoryKey;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) unsigned long long audioSourceOption;
@property (readonly, nonatomic) BOOL isMultiPhraseVTEnabled;

- (void).cxx_destruct;
- (id)initWithVTContext:(id)a0 error:(id *)a1;

@end
