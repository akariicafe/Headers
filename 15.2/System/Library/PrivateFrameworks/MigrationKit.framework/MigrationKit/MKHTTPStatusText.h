@class NSDictionary;

@interface MKHTTPStatusText : NSObject {
    NSDictionary *_statusTexts;
}

+ (id)sharedInstance;
+ (id)statusText:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)statusText:(unsigned long long)a0;

@end
