@class CACLanguageModel;

@interface CACCachedIdentifierLanguageModelDescriptor : NSObject {
    struct __RXLanguageObject { } *_rxLanguageObject;
}

@property (retain) CACLanguageModel *languageModel;
@property BOOL isCurrent;

- (void)dealloc;
- (void).cxx_destruct;
- (struct __RXLanguageObject { } *)rxLanguageObject;
- (void)setRxLanguageObject:(struct __RXLanguageObject { } *)a0;

@end
