@class NSError, SNAnalyzerHost;
@protocol SNAnalyzerCreating, SNProcessing;

@interface SNAnalyzerInfo : NSObject

@property (retain, nonatomic) id<SNAnalyzerCreating> request;
@property (copy, nonatomic) id /* block */ resultsHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) SNAnalyzerHost *analyzerHost;
@property (retain, nonatomic) id<SNProcessing> sharedProcessor;
@property (nonatomic) BOOL configured;
@property (retain, nonatomic) NSError *configurationError;

- (void).cxx_destruct;

@end
