@interface TSDDefaultPartitionerPrintingSettings : NSObject

@property (readonly, nonatomic) BOOL isPrinting;
@property (readonly, nonatomic) BOOL isDrawingIntoPDF;
@property (readonly, nonatomic) BOOL shouldSuppressBackgrounds;

- (BOOL)isEqual:(id)a0;
- (id)initWithCanvas:(id)a0;

@end
