@interface EMSheetMapper : CMMapper

- (int)width;
- (int)height;
- (struct CGSize { double x0; double x1; })adjustedSize;
- (int)preprocessHeightWithState:(id)a0;
- (struct CGSize { double x0; double x1; })preprocessSizeWithState:(id)a0;
- (int)preprocessWidthWithState:(id)a0;

@end
