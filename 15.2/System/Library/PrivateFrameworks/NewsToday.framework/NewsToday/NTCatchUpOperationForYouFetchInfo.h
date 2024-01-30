@class NSDictionary;

@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL attemptedCachedOnly;
@property (readonly, copy, nonatomic) NSDictionary *feedContextByFeedID;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttemptedCachedOnly:(BOOL)a0 feedContextByFeedID:(id)a1;

@end
