@class NSDictionary, _PASLock;
@protocol PMLTrainingProtocol;

@interface SGQuickResponsesML : NSObject {
    id<PMLTrainingProtocol> _localTraining;
    NSDictionary *_languagesToRecord;
    _PASLock *_perLanguageRecordersLock;
}

+ (BOOL)isLinkInString:(id)a0;
+ (BOOL)isFileInString:(id)a0;
+ (BOOL)isFourDigitInString:(id)a0;
+ (BOOL)_isSharingSenderLocation:(id)a0 senderName:(id)a1;
+ (BOOL)_isImageAttachment:(id)a0;

- (id)_dynamicLabelContentForReply:(id)a0 prompt:(id)a1 language:(id)a2;
- (void)dpRecordMessageText:(id)a0 inLanguage:(id)a1;
- (id)initWithTraining:(id)a0 andRecorders:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)trainQuickResponsesForMessage:(id)a0 withConversationHistory:(id)a1;

@end
