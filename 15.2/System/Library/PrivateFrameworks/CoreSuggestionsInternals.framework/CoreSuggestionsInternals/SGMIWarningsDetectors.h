@class SGMIWarningsDetectionRegexes;

@interface SGMIWarningsDetectors : NSObject

@property (readonly) SGMIWarningsDetectionRegexes *attachment;
@property (readonly) SGMIWarningsDetectionRegexes *recipient;
@property (readonly) SGMIWarningsDetectionRegexes *followUp;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAttachmentDictionary:(id)a0 recipientDictionary:(id)a1 followUpDictionary:(id)a2;

@end
