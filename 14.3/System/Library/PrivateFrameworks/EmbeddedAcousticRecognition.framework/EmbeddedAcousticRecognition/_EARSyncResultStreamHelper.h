@class NSArray, NSString, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface _EARSyncResultStreamHelper : NSObject <_EARSpeechRecognitionResultStream> {
    NSObject<OS_dispatch_semaphore> *_finishSemaphore;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (void)speechRecognizer:(id)a0 didRecognizePartialResult:(id)a1;
- (void)speechRecognizer:(id)a0 didFinishRecognitionWithError:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1;

@end
