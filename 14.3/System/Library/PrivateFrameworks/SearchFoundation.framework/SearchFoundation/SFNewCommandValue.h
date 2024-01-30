@class SFSearchWebCommand, SFIndexedUserActivityCommand, SFRequestUserReportCommand, NSDictionary, SFOpenCoreSpotlightItemCommand, SFPerformIntentCommand, NSString, SFOpenCalculationCommand, SFInvokeSiriCommand, SFPerformContactQueryCommand, SFPlayVideoCommand, SFUpdateSearchQueryCommand, SFRunVoiceShortcutCommand, SFLaunchAppCommand, SFRequestAppClipInstallCommand, NSData, SFShowSFCardCommand, SFShowContactCardCommand, SFOpenFileProviderItemCommand, SFShowAppStoreSheetCommand, SFSearchInAppCommand, SFOpenAppClipCommand, SFOpenPunchoutCommand, SFOpenWebClipCommand;

@interface SFNewCommandValue : NSObject <SFNewCommandValue, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFShowContactCardCommand *showContactCardCommand;
@property (retain, nonatomic) SFShowSFCardCommand *showSFCardCommand;
@property (retain, nonatomic) SFShowAppStoreSheetCommand *showAppStoreSheetCommand;
@property (retain, nonatomic) SFOpenPunchoutCommand *openPunchoutCommand;
@property (retain, nonatomic) SFOpenFileProviderItemCommand *openFileProviderItemCommand;
@property (retain, nonatomic) SFOpenAppClipCommand *openAppClipCommand;
@property (retain, nonatomic) SFOpenWebClipCommand *openWebClipCommand;
@property (retain, nonatomic) SFRequestAppClipInstallCommand *requestAppClipInstallCommand;
@property (retain, nonatomic) SFRequestUserReportCommand *requestUserReportCommand;
@property (retain, nonatomic) SFLaunchAppCommand *launchAppCommand;
@property (retain, nonatomic) SFRunVoiceShortcutCommand *runVoiceShortcutCommand;
@property (retain, nonatomic) SFIndexedUserActivityCommand *indexedUserActivityCommand;
@property (retain, nonatomic) SFOpenCoreSpotlightItemCommand *openCoreSpotlightItemCommand;
@property (retain, nonatomic) SFPerformIntentCommand *performIntentCommand;
@property (retain, nonatomic) SFSearchInAppCommand *searchInAppCommand;
@property (retain, nonatomic) SFUpdateSearchQueryCommand *UpdateSearchQueryCommand;
@property (retain, nonatomic) SFSearchWebCommand *searchWebCommand;
@property (retain, nonatomic) SFInvokeSiriCommand *InvokeSiriCommand;
@property (retain, nonatomic) SFPerformContactQueryCommand *PerformContactQueryCommand;
@property (retain, nonatomic) SFOpenCalculationCommand *OpenCalculationCommand;
@property (retain, nonatomic) SFPlayVideoCommand *playVideoCommand;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
