@class NSString;

@interface MockTITrialManager : NSObject <TITrialManager>

@property (copy) id /* block */ updateCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (id)encodedCATrialParametersForLocale:(id)a0;
- (id)encodedLMTrialParametersForLocale:(id)a0;
- (id)inputTranscoderAssetsDirectoryURLForLocale:(id)a0;

@end
