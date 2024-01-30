@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying>

@property (retain, nonatomic) SSVFairPlaySAPSession *SAPSession;
@property (nonatomic) BOOL usesLocalNetworking;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
