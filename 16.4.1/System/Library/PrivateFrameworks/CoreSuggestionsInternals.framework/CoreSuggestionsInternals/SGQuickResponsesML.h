@protocol PMLTrainingProtocol;

@interface SGQuickResponsesML : NSObject {
    id<PMLTrainingProtocol> _localTraining;
}

+ (BOOL)_isImageAttachment:(id)a0;
+ (BOOL)_isSharingSenderLocation:(id)a0 senderName:(id)a1;

- (id)_dynamicLabelContentForReply:(id)a0 prompt:(id)a1 language:(id)a2;
- (void)trainQuickResponsesForMessage:(id)a0 withConversationHistory:(id)a1;
- (id)init;
- (id)initWithTraining:(id)a0;
- (void).cxx_destruct;

@end
