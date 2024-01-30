@interface EMSheetMapper : CMMapper

- (int)width;
- (int)height;
- (int)preprocessWidthWithState:(id)a0;
- (int)preprocessHeightWithState:(id)a0;
- (struct CGSize { double x0; double x1; })adjustedSize;
- (struct CGSize { double x0; double x1; })preprocessSizeWithState:(id)a0;

@end
