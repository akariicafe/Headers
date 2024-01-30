@interface ATXBiomePrivacyPruner : NSObject

- (void)pruneWithStreamIdentifier:(id)a0 activity:(id)a1 config:(id)a2 endTime:(double)a3;
- (void)prunePublicStreamWithStreamIdentifier:(id)a0 activity:(id)a1;
- (void)pruneHomeScreenStreamWithActivity:(id)a0;
- (void)prunePredictionContextStreamWithActivity:(id)a0;
- (void)prunePrivateStreamWithStreamIdentifier:(id)a0 activity:(id)a1;

@end
