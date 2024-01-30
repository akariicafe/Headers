@class NSString, UPPreprocessor, NSLocale;

@interface UPLoadedModelConfiguration : NSObject

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly) BOOL isPLUMEnabled;
@property (readonly, nonatomic) NSString *bioLabelsVocabPath;
@property (readonly, nonatomic) NSString *intentVocabPath;
@property (readonly, nonatomic) void *labelToValueType;
@property (readonly, nonatomic) void *resolver;
@property (readonly, nonatomic) void *beamMaskInput;
@property (readonly, nonatomic) struct EspressoModule { void *x0; void *x1; struct { void *x0; int x1; } x2; } *parserEspressoModule;
@property (readonly, nonatomic) struct EspressoModule { void *x0; void *x1; struct { void *x0; int x1; } x2; } *calibrationEspressoModule;
@property (readonly, nonatomic) UPPreprocessor *preprocessor;
@property (readonly) BOOL hasCalibrationModel;
@property (readonly, nonatomic) NSString *bundleId;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModelConfiguration:(id)a0;

@end
