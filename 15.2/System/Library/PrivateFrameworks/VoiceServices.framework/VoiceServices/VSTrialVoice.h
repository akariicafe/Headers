@class NSString;

@interface VSTrialVoice : NSObject

@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long assetSize;
@property (nonatomic) long long compatibilityVersion;

- (BOOL)isLocal;
- (double)preferenceScore;
- (id)initWithLanguage:(id)a0 name:(id)a1;
- (id)description;
- (id)factorName;
- (void).cxx_destruct;
- (id)initWithFactorName:(id)a0;
- (id)initWithFactorLevel:(id)a0;

@end
