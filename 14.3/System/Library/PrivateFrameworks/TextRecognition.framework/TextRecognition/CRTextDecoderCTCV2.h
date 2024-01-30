@class CRTextSequenceRecognizerModel, NSOrderedSet, CRRecognizerConfiguration, CRRegex, NSLocale, NSString;

@interface CRTextDecoderCTCV2 : NSObject <CRTextDecoding>

@property (readonly, nonatomic) NSLocale *locale;
@property (retain) CRTextSequenceRecognizerModel *model;
@property (retain, nonatomic) CRRegex *regExpressions;
@property (nonatomic) BOOL shouldUseLM;
@property (readonly, nonatomic) NSOrderedSet *characterObservations;
@property (retain) CRRecognizerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedLanguages;

- (void).cxx_destruct;
- (void)dealloc;
- (void)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;
- (BOOL)shouldDecodeWithLM;

@end
