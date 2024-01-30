@class NSString, NSDictionary;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding>

@property (nonatomic) long long copies;
@property (nonatomic) BOOL staple;
@property (nonatomic) BOOL punch;
@property (retain, nonatomic) NSString *jobAccountID;
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

- (id)_initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateWithPrinter:(id)a0;
- (id)_createPrintSettingsForPrinter:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
