@interface SUDefaultCellCarrierOverrideDownloadPolicy : SUDefaultDownloadPolicy

- (id)description;
- (BOOL)allowExpensiveNetwork;
- (BOOL)isDownloadAllowableForCellular;

@end
