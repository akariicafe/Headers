@protocol PMLTrainingProtocol;

@interface SGDetectedAttributeML : NSObject {
    id<PMLTrainingProtocol> _localTraining;
}

- (id)selfIdDetectionWithTextMessage:(id)a0 inConversation:(id)a1 withSupervision:(id)a2;
- (void)handleTextMessageContactSharing:(id)a0 andMatch:(id)a1 andContext:(id)a2 andLanguage:(id)a3 withSupervision:(id)a4;
- (void)addSessionForTrainingWithSource:(id)a0 label:(long long)a1 language:(id)a2 objective:(unsigned long long)a3 spotlightRef:(id)a4 embeddedFeaturizer:(id /* block */)a5;
- (id)init;
- (id)initWithTraining:(id)a0;
- (id)birthdayCongratsTextMessage:(id)a0 andLanguage:(id)a1 andHealthStore:(id)a2;
- (id)detectionFromMatch:(id)a0 plainTextContent:(id)a1 extractionInfo:(id)a2 isUnlikelyPhone:(BOOL)a3;
- (void)handleTextMessageContactSharingWithNegativeSample:(id)a0 andLanguage:(id)a1;
- (void).cxx_destruct;
- (id)detectionFromMessage:(id)a0 ddMatch:(id)a1 matchedContext:(id)a2 withSupervision:(id)a3 inConversation:(id)a4 entityLanguage:(id)a5;

@end
