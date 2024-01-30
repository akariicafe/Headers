@class NSString, NSMutableDictionary, NSSet, TILanguageModelOfflineLearningHandle, NSCharacterSet;
@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTask : NSObject {
    TILanguageModelOfflineLearningHandle *_handleForLanguageLikelihood;
}

@property (readonly, nonatomic) NSMutableDictionary *handles;
@property (readonly, nonatomic) TILanguageModelOfflineLearningHandle *handleForLanguageLikelihood;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) id<TILinguisticDataSource> dataSource;
@property (readonly, nonatomic) NSCharacterSet *linePaddingCharacters;
@property (readonly, nonatomic) NSSet *forwardedMessageSeparators;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) BOOL oneTimeTask;

+ (id)dataSourceForTask;
+ (id)taskWithClientIdentifier:(id)a0 oneTimeTask:(BOOL)a1;

- (void).cxx_destruct;
- (void)didFinishLearning;
- (void)enumerateHandlesForLanguage:(id)a0 withBlock:(id /* block */)a1;
- (id)handleForLanguage:(id)a0;
- (BOOL)incrementUsageCountsForMessages:(id)a0 forLanguage:(id)a1 adaptationContext:(id)a2;
- (BOOL)incrementUsageCountsForMessages:(id)a0 withHandle:(id)a1;
- (id)initWithClientIdentifier:(id)a0 oneTimeTask:(BOOL)a1;
- (void)setAdaptationContext:(id)a0 onHandle:(id)a1;

@end
