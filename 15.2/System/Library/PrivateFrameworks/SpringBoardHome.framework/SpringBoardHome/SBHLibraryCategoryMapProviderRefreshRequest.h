@class NSString, NSMutableDictionary;

@interface SBHLibraryCategoryMapProviderRefreshRequest : NSObject <NSCopying> {
    NSMutableDictionary *_failures;
}

@property (readonly, nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *requestReason;
@property (copy, nonatomic) NSString *senderDescription;
@property (readonly, nonatomic) unsigned long long failureCount;

- (void)accumulateFailure:(id)a0 forSession:(unsigned long long)a1;
- (BOOL)hasFailedSeveralTimes;
- (id)description;
- (id)failureForSessionIdentifier:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(unsigned long long)a0 reason:(id)a1;

@end
