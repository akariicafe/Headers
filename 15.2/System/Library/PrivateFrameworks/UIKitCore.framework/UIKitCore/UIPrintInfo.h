@class NSString, NSArray, NSDictionary;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding>

@property (nonatomic) long long copies;
@property (nonatomic) long long staple;
@property (nonatomic) long long punch;
@property (nonatomic) long long fold;
@property (nonatomic) long long laminate;
@property (nonatomic) long long coat;
@property (nonatomic) long long trim;
@property (retain, nonatomic) NSString *finishingTemplate;
@property (retain, nonatomic) NSString *outputBin;
@property (retain, nonatomic) NSString *pageStackOrder;
@property (retain, nonatomic) NSString *jobAccountID;
@property (retain, nonatomic) NSString *inputSlot;
@property (retain, nonatomic) NSString *mediaType;
@property (nonatomic) long long pageCount;
@property (retain, nonatomic) NSArray *pageRanges;
@property (nonatomic) long long quality;
@property (nonatomic) BOOL pdfAnnotationsAvailable;
@property (nonatomic) BOOL scaleToFit;
@property (nonatomic) BOOL scaleDownOnly;
@property (nonatomic) BOOL scaleUp;
@property (retain, nonatomic) NSString *pdfPassword;
@property (nonatomic) BOOL imagePDFAnnotations;
@property (copy, nonatomic) NSString *printerID;
@property (copy, nonatomic) NSString *jobName;
@property (nonatomic) long long outputType;
@property (nonatomic) long long orientation;
@property (nonatomic) long long duplex;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)printInfoWithDictionary:(id)a0;
+ (id)printInfo;

- (void)updateWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateWithPrinter:(id)a0;
- (id)_createPrintSettingsForPrinter:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithDictionary:(id)a0;

@end
