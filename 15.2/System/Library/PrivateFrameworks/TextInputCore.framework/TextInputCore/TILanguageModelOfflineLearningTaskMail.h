@class NSSet, NSCharacterSet;
@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask {
    NSCharacterSet *_linePaddingCharacters;
    NSSet *_forwardedMessageSeparators;
    id<TILinguisticDataSource> _dataSource;
}

+ (id)dataSourceForTask;

- (id)dataSource;
- (void).cxx_destruct;
- (id)linePaddingCharacters;
- (id)forwardedMessageSeparators;
- (id)initWithClientIdentifier:(id)a0 oneTimeTask:(BOOL)a1;

@end
