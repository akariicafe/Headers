@class NSURL, NSMutableData, NSDictionary;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat

@property (retain) NSURL *outputURL;
@property (retain) NSMutableData *pdfData;
@property (copy, nonatomic) NSDictionary *documentInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
