@class NSString, SGExtractionInfo;

@interface SGDetection : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSString *extraction;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contextRangeOfInterest;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasPhoneLabel;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } match;
@property (readonly, nonatomic) SGExtractionInfo *extractionInfo;
@property (readonly, nonatomic) BOOL isUnlikelyPhone;

+ (id)detectionWithType:(unsigned int)a0 text:(id)a1 matchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 matchString:(id)a3 label:(id)a4 hasPhoneLabel:(BOOL)a5 extractionInfo:(id)a6 isUnlikelyPhone:(BOOL)a7;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned int)a0 extraction:(id)a1 context:(id)a2 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 label:(id)a4 hasPhoneLabel:(BOOL)a5 match:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 extractionInfo:(id)a7 isUnlikelyPhone:(BOOL)a8;

@end
