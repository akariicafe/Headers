@class SBKSyncResponseData;

@interface SBKSyncResponse : SBKResponse

@property (readonly, nonatomic) SBKSyncResponseData *syncResponseData;

+ (id)responseWithResponse:(id)a0 transaction:(id)a1;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)a0;

@end
