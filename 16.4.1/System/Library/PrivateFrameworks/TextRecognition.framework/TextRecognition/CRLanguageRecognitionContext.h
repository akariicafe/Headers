@class NSString, NSMutableString, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface CRLanguageRecognitionContext : NSObject {
    NSString *_recognizedLanguage;
}

@property (retain) NSMutableArray *featuresAccumulator;
@property (retain) NSMutableString *contextString;
@property unsigned long long script;
@property (retain) NSObject<OS_dispatch_semaphore> *languageRecognitionSem;
@property (readonly) NSString *recognizedLanguage;

- (void).cxx_destruct;
- (id)initWithScript:(unsigned long long)a0;
- (void)_updateFeatureLocale:(id)a0;
- (void)processFeature:(id)a0 recognizer:(id)a1;
- (void)runRecognitionWithRecognizer:(id)a0 force:(BOOL)a1;

@end
