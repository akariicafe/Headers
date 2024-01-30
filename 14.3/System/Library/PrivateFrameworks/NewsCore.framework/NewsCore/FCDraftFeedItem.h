@class NSString;

@interface FCDraftFeedItem : NTPBFeedItem {
    NSString *feedID;
}

@property (retain, nonatomic) NSString *articleID;

- (void).cxx_destruct;
- (void)setFeedID:(id)a0;
- (id)feedID;

@end
