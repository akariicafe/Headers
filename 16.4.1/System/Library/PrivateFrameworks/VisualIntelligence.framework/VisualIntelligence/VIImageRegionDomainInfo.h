@class NSString;

@interface VIImageRegionDomainInfo : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isLowConfidence;
@property (readonly, nonatomic) NSString *domainKey;
@property (readonly, nonatomic) NSString *labelName;
@property (readonly, nonatomic) NSString *glyphName;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *displayMessage;
@property (readonly, nonatomic) BOOL hasFocalPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } focalPoint;
@property (readonly, nonatomic) BOOL ocrResultsRequired;
@property (readonly, nonatomic) BOOL barcodeResultsRequired;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomainKey:(id)a0 labelName:(id)a1 glyphName:(id)a2 displayLabel:(id)a3 displayMessage:(id)a4 hasFocalPoint:(BOOL)a5 focalPoint:(struct CGPoint { double x0; double x1; })a6 ocrResultsRequired:(BOOL)a7 barcodeResultsRequired:(BOOL)a8 isLowConfidence:(BOOL)a9;

@end
