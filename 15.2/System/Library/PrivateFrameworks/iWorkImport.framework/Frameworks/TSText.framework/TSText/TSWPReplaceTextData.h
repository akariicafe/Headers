@class NSString, NSArray;

@interface TSWPReplaceTextData : NSObject

@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *dictationAndAutocorrection;
@property (readonly, copy, nonatomic) NSArray *attachments;

+ (id)replaceTextDataWithLanguage:(id)a0 dictationAndAutocorrection:(id)a1;
+ (id)replaceTextDataWithLanguage:(id)a0;
+ (id)replaceTextDataWithDictationAndAutocorrection:(id)a0;
+ (id)replaceTextDataWithAttachments:(id)a0;
+ (id)replaceTextData;

- (id)initWithAttachments:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithLanguage:(id)a0;
- (id)initWithLanguage:(id)a0 dictationAndAutocorrection:(id)a1;
- (id)initWithDictationAndAutocorrection:(id)a0;
- (id)replaceTextDataByChangingLanguage:(id)a0;
- (id)replaceTextDataByChangingDictationAndAutocorrection:(id)a0;

@end
