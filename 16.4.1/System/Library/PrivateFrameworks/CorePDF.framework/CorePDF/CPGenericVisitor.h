@interface CPGenericVisitor : NSObject <CPVisitor>

- (void)visitParagraph:(id)a0;
- (void)visitBody:(id)a0;
- (void)visitChunk:(id)a0;
- (void)visitColumn:(id)a0;
- (void)visitCompoundGraphic:(id)a0;
- (void)visitImage:(id)a0;
- (void)visitImageRegion:(id)a0;
- (void)visitLayoutArea:(id)a0;
- (void)visitPage:(id)a0;
- (void)visitRegion:(id)a0;
- (void)visitShape:(id)a0;
- (void)visitShapeRegion:(id)a0;
- (void)visitTextBox:(id)a0;
- (void)visitTextLine:(id)a0;
- (void)visitZone:(id)a0;

@end
