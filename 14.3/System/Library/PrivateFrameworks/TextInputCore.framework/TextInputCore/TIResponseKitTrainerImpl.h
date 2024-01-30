@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>

+ (id)sharedTrainer;

- (void)performTrainingForClient:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_init;
- (BOOL)moveLanguageModelBundlesFromTemporaryDirectory:(id)a0 toDestination:(id)a1 error:(id *)a2;

@end
