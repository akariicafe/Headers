@class NSString, NSNumber;

@interface _EARSpeakerCodeInfo : NSObject

@property (readonly, nonatomic) NSString *trainingSpeakerCode;
@property (copy, nonatomic) NSString *inferenceSpeakerCode;
@property (readonly, nonatomic) NSString *accumulatedGradient;
@property (copy, nonatomic) NSNumber *numFrames;
@property (readonly, nonatomic) NSNumber *nnetVersion;
@property (readonly, nonatomic) NSNumber *trainingOffset;
@property (readonly, nonatomic) NSNumber *recognitionOffset;
@property (nonatomic) BOOL isSpeakerCodeUsed;

- (id)initWithLanguage:(id)a0;
- (void).cxx_destruct;

@end
