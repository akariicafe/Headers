@class SGMIWarningsDetectionRegexes;

@interface SGMIWarningsDetectors : NSObject

@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *attachment;
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *recipientConservative;
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *recipient;
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *nickname;
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *followUpOnOutgoingMailsQuestions;
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *followUpOnOutgoingMailsAsks;
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *followUpOnIncomingMails;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAttachmentDictionary:(id)a0 recipientConservativeDictionary:(id)a1 recipientDictionary:(id)a2 nicknameDictionary:(id)a3 followUpOnOutgoingMailsQuestionsDictionary:(id)a4 followUpOnOutgoingMailsAsksDictionary:(id)a5 followUpOnIncomingMailsDictionary:(id)a6;

@end
