@class NSString, NSData;

@interface SBKPullValueResponse : SBKResponse

@property (readonly) NSString *itemKey;
@property (readonly) NSString *itemVersion;
@property (readonly) NSData *itemValuePayload;
@property (readonly) NSString *domainVersion;

+ (id)responseWithResponse:(id)a0 transaction:(id)a1;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)a0;

@end
