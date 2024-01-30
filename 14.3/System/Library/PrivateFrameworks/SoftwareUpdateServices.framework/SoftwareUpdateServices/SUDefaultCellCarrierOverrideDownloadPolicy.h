@interface SUDefaultCellCarrierOverrideDownloadPolicy : SUDefaultDownloadPolicy

- (id)description;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)allowExpensiveNetwork;

@end
