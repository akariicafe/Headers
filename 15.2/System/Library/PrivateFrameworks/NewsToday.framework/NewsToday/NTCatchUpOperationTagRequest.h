@class NSString;

@interface NTCatchUpOperationTagRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *tagID;
@property (readonly, nonatomic) long long cutoffTime;
@property (readonly, nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (readonly, nonatomic) long long fetchingBin;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTagTodaySectionSpecificConfig:(id)a0 tagID:(id)a1;

@end
