@class NSCache;

@interface MKWebContentBlocker : NSObject {
    NSCache *_regularExpressionCache;
}

+ (id)sharedBlocker;

- (void).cxx_destruct;
- (BOOL)shouldBlockLoadingOfURL:(id)a0;
- (id)_regularExpression;

@end
