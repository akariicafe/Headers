@interface SFUtilities : NSObject

+ (void)initialize;
+ (BOOL)isSpeechXPCEnabled;
+ (id)recognizedResultFromPackage:(id)a0;
+ (id)transcriptionsWithTokens:(id)a0;
+ (void)supportedLocalesWithCompletion:(id /* block */)a0;
+ (id)transcriptionFromSpeechPhrases:(id)a0 afAudioAnalytics:(id)a1 utteranceStart:(double)a2;
+ (id)recognitionMetadataFromSpeechPhrases:(id)a0 afAudioAnalytics:(id)a1 utteranceStart:(double)a2;
+ (BOOL)canAccessPathAt:(id)a0 methodName:(id)a1 error:(id *)a2;
+ (id)taskNameFromTaskHint:(long long)a0;
+ (id)issueSandboxExtensionForPath:(id)a0 error:(id *)a1;

@end
