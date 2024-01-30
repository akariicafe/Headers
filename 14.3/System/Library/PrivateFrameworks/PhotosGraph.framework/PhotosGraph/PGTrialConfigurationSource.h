@class NSString, PGTrialSession;

@interface PGTrialConfigurationSource : NSObject <PGConfigurationSource>

@property (retain, nonatomic) PGTrialSession *trialSession;
@property (nonatomic) unsigned short namespaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithTrialSession:(id)a0 namespaceType:(unsigned short)a1;

@end
