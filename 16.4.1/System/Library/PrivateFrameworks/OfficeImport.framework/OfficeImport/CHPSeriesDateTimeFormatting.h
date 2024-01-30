@interface CHPSeriesDateTimeFormatting : EDProcessor

- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (BOOL)isDateTimeFomrattingInData:(id)a0;
- (BOOL)isDateTimeFormattingInContentFormatString:(id)a0 edCell:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a1;
- (BOOL)isObjectSupported:(id)a0;

@end
