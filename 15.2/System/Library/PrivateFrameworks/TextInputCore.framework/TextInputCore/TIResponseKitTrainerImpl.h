@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>

+ (id)sharedTrainer;

- (id)_init;
- (void)performTrainingForClient:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)moveLanguageModelBundlesFromTemporaryDirectory:(id)a0 toDestination:(id)a1 error:(id *)a2;

@end
