@class TMAPIClient, NSString, WFAppInstalledResource;

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) TMAPIClient *client;
@property (retain, nonatomic) WFAppInstalledResource *appInstalledResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)inputContentClasses;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)defaultSerializedRepresentationForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (BOOL)inputsMultipleItems;
- (void)openFiles:(id)a0;
- (void)openPostWithType:(id)a0 withParameters:(id)a1;
- (void)updateTagsParameterHidden;

@end
