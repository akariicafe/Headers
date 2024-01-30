@class NSString;

@interface VSTrialVoiceResource : NSObject

@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) unsigned long long version;

- (BOOL)isLocal;
- (id)factorName;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (id)initWithFactorName:(id)a0;
- (id)initWithFactorLevel:(id)a0;

@end
