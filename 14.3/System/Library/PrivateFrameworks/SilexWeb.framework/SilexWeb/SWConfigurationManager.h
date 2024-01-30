@class NSString, SWConfiguration;
@protocol SWScript, SWScriptsManager, SWLogger, SWConfigurationSerializer;

@interface SWConfigurationManager : NSObject <SWConfigurationManager>

@property (readonly, nonatomic) id<SWScriptsManager> webContentScriptsManager;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (retain, nonatomic) id<SWScript> configurationScript;
@property (readonly, nonatomic) id<SWConfigurationSerializer> serializer;
@property (copy, nonatomic) SWConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWebContentScriptsManager:(id)a0 logger:(id)a1 serializer:(id)a2;

@end
