@class NSString, NSData;

@interface SBKPushValueResponse : SBKResponse

@property (readonly, nonatomic) NSString *domainVersion;
@property (readonly, nonatomic) NSData *conflictItemValuePayload;
@property (readonly, nonatomic) NSString *conflictItemKey;
@property (readonly, nonatomic) NSString *conflictItemVersionAnchor;

+ (id)responseWithResponse:(id)a0 transaction:(id)a1;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)a0;

@end
