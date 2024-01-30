@class NSString, NSArray;

@interface WBSTrackingCapableThirdParty : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSArray *firstParties;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDomain:(id)a0 firstParties:(id)a1;

@end
