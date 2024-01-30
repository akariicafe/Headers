@class NSString, CVNLPTextDecodingResult, NSObject, CVNLPActivationMatrix;
@protocol OS_dispatch_semaphore;

@interface CRCVNLPTransientResult : NSObject <CRTextRecognizerDecodingTransientResult>

@property (retain) CVNLPTextDecodingResult *greedyDecodingResult;
@property (retain) CVNLPActivationMatrix *activationMatrix;
@property (retain) NSString *decodingLocale;
@property (retain) NSObject<OS_dispatch_semaphore> *languageRecognitionActiveSem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActivationMatrix:(id)a0 decodingLocale:(id)a1;

@end
