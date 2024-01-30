@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMessages : TILanguageModelOfflineLearningTask {
    id<TILinguisticDataSource> _dataSource;
}

+ (id)dataSourceForTask;

- (id)dataSource;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 oneTimeTask:(BOOL)a1;

@end
