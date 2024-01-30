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

- (double)preferenceScore;
- (id)factorName;
- (id)initWithLanguage:(id)a0 name:(id)a1;
- (BOOL)isLocal;
- (id)description;
- (id)initWithFactorLevel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFactorName:(id)a0;

@end
