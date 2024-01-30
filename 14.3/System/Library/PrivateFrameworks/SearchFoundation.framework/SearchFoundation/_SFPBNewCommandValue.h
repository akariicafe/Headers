@class _SFPBRequestAppClipInstallCommand, _SFPBShowSFCardCommand, _SFPBInvokeSiriCommand, _SFPBRequestUserReportCommand, _SFPBRunVoiceShortcutCommand, NSString, _SFPBShowContactCardCommand, _SFPBSearchInAppCommand, _SFPBOpenCoreSpotlightItemCommand, _SFPBIndexedUserActivityCommand, _SFPBUpdateSearchQueryCommand, _SFPBLaunchAppCommand, _SFPBPerformIntentCommand, _SFPBOpenWebClipCommand, _SFPBOpenPunchoutCommand, NSData, _SFPBPerformContactQueryCommand, _SFPBOpenCalculationCommand, _SFPBShowAppStoreSheetCommand, _SFPBOpenFileProviderItemCommand, _SFPBPlayVideoCommand, _SFPBSearchWebCommand, _SFPBOpenAppClipCommand;

@interface _SFPBNewCommandValue : PBCodable <_SFPBNewCommandValue, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBShowContactCardCommand *showContactCardCommand;
@property (retain, nonatomic) _SFPBShowSFCardCommand *showSFCardCommand;
@property (retain, nonatomic) _SFPBShowAppStoreSheetCommand *showAppStoreSheetCommand;
@property (retain, nonatomic) _SFPBOpenPunchoutCommand *openPunchoutCommand;
@property (retain, nonatomic) _SFPBOpenFileProviderItemCommand *openFileProviderItemCommand;
@property (retain, nonatomic) _SFPBOpenAppClipCommand *openAppClipCommand;
@property (retain, nonatomic) _SFPBOpenWebClipCommand *openWebClipCommand;
@property (retain, nonatomic) _SFPBRequestAppClipInstallCommand *requestAppClipInstallCommand;
@property (retain, nonatomic) _SFPBRequestUserReportCommand *requestUserReportCommand;
@property (retain, nonatomic) _SFPBLaunchAppCommand *launchAppCommand;
@property (retain, nonatomic) _SFPBRunVoiceShortcutCommand *runVoiceShortcutCommand;
@property (retain, nonatomic) _SFPBIndexedUserActivityCommand *indexedUserActivityCommand;
@property (retain, nonatomic) _SFPBOpenCoreSpotlightItemCommand *openCoreSpotlightItemCommand;
@property (retain, nonatomic) _SFPBPerformIntentCommand *performIntentCommand;
@property (retain, nonatomic) _SFPBSearchInAppCommand *searchInAppCommand;
@property (retain, nonatomic) _SFPBUpdateSearchQueryCommand *UpdateSearchQueryCommand;
@property (retain, nonatomic) _SFPBSearchWebCommand *searchWebCommand;
@property (retain, nonatomic) _SFPBInvokeSiriCommand *InvokeSiriCommand;
@property (retain, nonatomic) _SFPBPerformContactQueryCommand *PerformContactQueryCommand;
@property (retain, nonatomic) _SFPBOpenCalculationCommand *OpenCalculationCommand;
@property (retain, nonatomic) _SFPBPlayVideoCommand *playVideoCommand;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
