@interface EPMergedRegionScanner : EDProcessor

- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (BOOL)isObjectSupported:(id)a0;
- (BOOL)processMergedRegion:(id)a0 inWorksheet:(id)a1;

@end
