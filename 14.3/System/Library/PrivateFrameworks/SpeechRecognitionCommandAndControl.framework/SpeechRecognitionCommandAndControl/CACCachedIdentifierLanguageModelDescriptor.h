@class CACLanguageModel;

@interface CACCachedIdentifierLanguageModelDescriptor : NSObject {
    struct __RXLanguageObject { } *_rxLanguageObject;
}

@property (retain) CACLanguageModel *languageModel;
@property BOOL isCurrent;

- (void).cxx_destruct;
- (void)dealloc;
- (struct __RXLanguageObject { } *)rxLanguageObject;
- (void)setRxLanguageObject:(struct __RXLanguageObject { } *)a0;

@end
