@class NSString;

@interface WFWebPageToTrainingText : WFWebPageDecorator {
    NSString *categorySignature;
}

+ (id)signatureForCategory:(unsigned long long)a0;
+ (id)documentSignature;

- (void)dealloc;
- (id)rawPlainText;
- (id)categorySignature;
- (void)setCategorySignature:(id)a0;

@end
