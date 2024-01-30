@class NSString, SGExtractionInfo;

@interface SGSelfIdentificationDetection : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *context;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contextRange;
@property (retain, nonatomic) SGExtractionInfo *extractionInfo;

- (void).cxx_destruct;

@end
