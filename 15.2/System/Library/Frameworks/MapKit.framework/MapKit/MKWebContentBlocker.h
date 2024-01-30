@class NSCache;

@interface MKWebContentBlocker : NSObject {
    NSCache *_regularExpressionCache;
}

+ (id)sharedBlocker;

- (id)_regularExpression;
- (void).cxx_destruct;
- (BOOL)shouldBlockLoadingOfURL:(id)a0;

@end
