@class PPSWStringDonationConsumer;

@interface PPStringDonationHandler : NSObject <PPStringDonationProtocol> {
    PPSWStringDonationConsumer *_consumer;
}

- (void)donateLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3 completion:(id /* block */)a4;
- (id)init;
- (id)initWithTopicStore:(id)a0 entityStore:(id)a1 topicDissector:(id)a2 entityDissector:(id)a3;
- (void).cxx_destruct;

@end
