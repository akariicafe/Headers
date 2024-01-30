@class NSString, NSData;

@interface SBKPushValueResponse : SBKResponse

@property (readonly) NSString *domainVersion;
@property (readonly) NSData *conflictItemValuePayload;
@property (readonly) NSString *conflictItemKey;
@property (readonly) NSString *conflictItemVersionAnchor;

+ (id)responseWithResponse:(id)a0 transaction:(id)a1;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)a0;

@end
