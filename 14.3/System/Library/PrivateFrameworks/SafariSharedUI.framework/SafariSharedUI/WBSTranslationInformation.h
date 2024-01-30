@class NSString;

@interface WBSTranslationInformation : NSObject

@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSString *sourceLanguage;
@property (readonly, copy, nonatomic) NSString *targetLanguage;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURLString:(id)a0 sourceLanguage:(id)a1 targetLanguage:(id)a2;

@end
