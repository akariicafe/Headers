@class PHMediaFormatConversionRequest;

@interface PHMediaFormatConversionJob : NSObject

@property (retain) PHMediaFormatConversionRequest *conversionRequest;
@property (copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)description;

@end
