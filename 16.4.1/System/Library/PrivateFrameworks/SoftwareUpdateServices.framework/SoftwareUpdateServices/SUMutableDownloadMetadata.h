@interface SUMutableDownloadMetadata : SUDownloadMetadata

@property (nonatomic) int downloadFeeAgreementStatus;
@property (nonatomic) int termsAndConditionsAgreementStatus;
@property (nonatomic) BOOL enforceWifiOnlyOverride;
@property (nonatomic, getter=isAutoDownload) BOOL autoDownload;
@property (nonatomic, getter=isDownloadOnly) BOOL downloadOnly;

- (id)initWithMetadata:(id)a0;
- (void)applyDownloadPolicy:(id)a0;

@end
