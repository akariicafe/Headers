@class NSCharacterSet;

@interface VSSpeechCharacterSet : NSObject

@property (retain, nonatomic) NSCharacterSet *characterSet;

+ (id)languageMapping;

- (id)initWithLanguage:(id)a0;
- (void).cxx_destruct;
- (id)unspeakableRangeOfText:(id)a0;

@end
