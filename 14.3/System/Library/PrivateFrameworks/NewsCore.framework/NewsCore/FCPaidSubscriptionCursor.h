@class NSMutableSet, NSMutableDictionary;

@interface FCPaidSubscriptionCursor : FCFeedGroupEmittingCursor

@property (retain, nonatomic) NSMutableSet *processedChannelIDs;
@property (retain, nonatomic) NSMutableDictionary *supplementalArticleIDs;
@property (retain, nonatomic) NSMutableDictionary *expiredChannelIDs;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)purgeExpiredChannelIdentifiersNotInArray:(id)a0;
- (unsigned long long)expiredGroupEmitCountForChannelWithIdentifier:(id)a0;
- (void)purgeSupplementalArticleIDsNotInArray:(id)a0 forChannel:(id)a1;
- (void)trackSupplementalFeedItem:(id)a0;
- (unsigned long long)countForFeedItem:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
