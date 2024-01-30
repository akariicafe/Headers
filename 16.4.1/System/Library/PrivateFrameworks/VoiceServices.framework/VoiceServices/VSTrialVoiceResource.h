@class NSString;

@interface VSTrialVoiceResource : NSObject

@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) unsigned long long version;

- (id)factorName;
- (id)initWithLanguage:(id)a0;
- (BOOL)isLocal;
- (id)initWithFactorLevel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFactorName:(id)a0;

@end
