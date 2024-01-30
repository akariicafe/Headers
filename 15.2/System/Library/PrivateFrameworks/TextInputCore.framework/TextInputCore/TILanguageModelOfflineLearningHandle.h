@class NSDate, TILanguageModelAdaptationContext, TIInputMode;

@interface TILanguageModelOfflineLearningHandle : NSObject

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (copy, nonatomic) NSDate *lastAdaptationDate;
@property (copy, nonatomic) TILanguageModelAdaptationContext *currentAdaptationContext;
@property (nonatomic, getter=isValid) BOOL valid;

+ (id)handleForInputMode:(id)a0;
+ (id)handleForLanguageLikelihood;

- (id)initWithInputMode:(id)a0;
- (void).cxx_destruct;
- (void)load;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)a0;
- (void)adaptToParagraph:(id)a0 timeStamp:(double)a1 adaptationType:(int)a2;

@end
