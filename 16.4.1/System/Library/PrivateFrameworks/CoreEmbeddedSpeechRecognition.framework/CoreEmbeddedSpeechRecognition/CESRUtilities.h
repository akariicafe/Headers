@interface CESRUtilities : NSObject

+ (BOOL)aFEnableFeatureAndCheckPreferenceValueWithKey:(struct __CFString { } *)a0;
+ (id)recognizerSourceForTask:(id)a0;
+ (id)speechProfileDateLastModifiedForLanguage:(id)a0;
+ (long long)calculateDiffInDaysFromTimestamp:(id)a0;
+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResultPackage:(id)a0;
+ (id)languageStringForLocaleString:(id)a0;
+ (unsigned long long)secondsToHostTime:(float)a0;
+ (float)hostTimeToSeconds:(unsigned long long)a0;
+ (id)localeStringForLanguageString:(id)a0;
+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResult:(id)a0;
+ (id)earTokensToString:(id)a0;
+ (id)mapContextOptionToString:(unsigned long long)a0;
+ (double)getHostClockFrequency;
+ (unsigned long long)audioLengthInBytes:(double)a0 samplingRate:(unsigned long long)a1;
+ (id)afVoiceCommandGrammarParseResultForEARTokenString:(id)a0 withEARVoiceCommandInterpretations:(id)a1;
+ (void)loadSpeechProfiles:(id)a0 language:(id)a1;
+ (BOOL)hasRecognizedAnythingInAFSpeechPackage:(id)a0;
+ (id)earTokensForAFTokens:(id)a0 appendedAutoPunctuation:(BOOL)a1;
+ (id)audioData:(id)a0 withBytesFromEnd:(unsigned long long)a1;
+ (double)audioDurationInMs:(id)a0 samplingRate:(unsigned long long)a1;
+ (id)afSpeechPackageForEARPackage:(id)a0 processedAudioDuration:(double)a1 speechProfileUsed:(BOOL)a2;
+ (id)afTokensForEARTokens:(id)a0 removeSpaceBefore:(BOOL)a1;
+ (id)voiceCommandsParamKeyBuilder:(unsigned long long)a0;
+ (id)speechProfilePathsWithLanguage:(id)a0;
+ (unsigned long long)machAbsoluteTimeToMachContinuousTime:(unsigned long long)a0;
+ (id)afRecognitionForEARSausage:(id)a0 processedAudioDuration:(double)a1;
+ (BOOL)isFilePathValid:(id)a0;
+ (id)speechProfileRootDirectories;

@end
