@class _SFPBShowPurchaseRequestSheetCommand, _SFPBShowAppStoreSheetCommand, _SFPBPlayMediaCommand, _SFPBAddToPhotosLibraryCommand, _SFPBShowPhotosOneUpViewCommand, _SFPBShowScreenTimeRequestSheetCommand, _SFPBOpenFileProviderItemCommand, _SFPBOpenCoreSpotlightItemCommand, _SFPBSearchInAppCommand, _SFPBUpdateSearchQueryCommand, _SFPBToggleAudioCommand, _SFPBToggleWatchListStatusCommand, _SFPBLaunchAppCommand, _SFPBPerformPersonEntityQueryCommand, _SFPBShareCommand, _SFPBOpenCalculationCommand, NSData, _SFPBInvokeSiriCommand, _SFPBOpenWebClipCommand, _SFPBOpenAppClipCommand, _SFPBEmailCommand, _SFPBPerformContactActionCommand, _SFPBShowSFCardCommand, _SFPBPlayVideoCommand, _SFPBPerformIntentCommand, _SFPBPerformEntityQueryCommand, NSString, _SFPBRequestUserReportCommand, _SFPBIndexedUserActivityCommand, _SFPBPerformContactQueryCommand, _SFPBCallCommand, _SFPBRunVoiceShortcutCommand, _SFPBSearchWebCommand, _SFPBRequestAppClipInstallCommand, _SFPBShowContactCardCommand, _SFPBCopyCommand, _SFPBOpenPunchoutCommand, _SFPBBeginMapsRoutingCommand, _SFPBOpenMediaCommand;

@interface _SFPBCommand : PBCodable <_SFPBCommand, NSSecureCoding>

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
@property (retain, nonatomic) _SFPBUpdateSearchQueryCommand *updateSearchQueryCommand;
@property (retain, nonatomic) _SFPBSearchWebCommand *searchWebCommand;
@property (retain, nonatomic) _SFPBInvokeSiriCommand *invokeSiriCommand;
@property (retain, nonatomic) _SFPBPerformContactQueryCommand *performContactQueryCommand;
@property (retain, nonatomic) _SFPBOpenCalculationCommand *openCalculationCommand;
@property (retain, nonatomic) _SFPBPlayVideoCommand *playVideoCommand;
@property (retain, nonatomic) _SFPBCallCommand *callCommand;
@property (retain, nonatomic) _SFPBEmailCommand *emailCommand;
@property (retain, nonatomic) _SFPBBeginMapsRoutingCommand *beginMapsRoutingCommand;
@property (retain, nonatomic) _SFPBToggleAudioCommand *toggleAudioCommand;
@property (retain, nonatomic) _SFPBPerformPersonEntityQueryCommand *performPersonEntityQueryCommand;
@property (retain, nonatomic) _SFPBShowPurchaseRequestSheetCommand *showPurchaseRequestSheetCommand;
@property (retain, nonatomic) _SFPBShowScreenTimeRequestSheetCommand *showScreenTimeRequestSheetCommand;
@property (retain, nonatomic) _SFPBPerformEntityQueryCommand *performEntityQueryCommand;
@property (retain, nonatomic) _SFPBShareCommand *shareCommand;
@property (retain, nonatomic) _SFPBCopyCommand *copyCommand;
@property (retain, nonatomic) _SFPBToggleWatchListStatusCommand *toggleWatchListStatusCommand;
@property (retain, nonatomic) _SFPBShowPhotosOneUpViewCommand *showPhotosOneUpViewCommand;
@property (retain, nonatomic) _SFPBPlayMediaCommand *playMediaCommand;
@property (retain, nonatomic) _SFPBOpenMediaCommand *openMediaCommand;
@property (retain, nonatomic) _SFPBAddToPhotosLibraryCommand *addToPhotosLibraryCommand;
@property (retain, nonatomic) _SFPBPerformContactActionCommand *performContactActionCommand;
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
