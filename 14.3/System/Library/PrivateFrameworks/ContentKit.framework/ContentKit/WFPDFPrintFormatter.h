@class WFPDFDocument, UIPrintFormatter;

@interface WFPDFPrintFormatter : NSObject <NSCopying>

@property (readonly, nonatomic) WFPDFDocument *document;
@property (readonly, nonatomic) UIPrintFormatter *printFormatter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFileRepresentation:(id)a0;
- (id)initWithPDFDocument:(id)a0;

@end
