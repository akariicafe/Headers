@class SGTopicExtractionPlugin, SGNamedEntityExtractionPlugin;

@interface SGStringDonationHandler : NSObject <PPStringDonationProtocol> {
    SGTopicExtractionPlugin *_topicPlugin;
    SGNamedEntityExtractionPlugin *_namedEntityPlugin;
}

- (id)init;
- (void).cxx_destruct;
- (void)donateLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3 completion:(id /* block */)a4;
- (id)initWithTopicPlugin:(id)a0 namedEntityPlugin:(id)a1;
- (BOOL)_donateNotificationFromLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3 error:(id *)a4;
- (void)_donateNamedEntitiesFromLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3;
- (void)_donateTopicsFromLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3;

@end
