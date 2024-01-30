@class NSSet, PDSRequestInfo;

@interface PDSRequest : NSObject

@property (readonly, nonatomic) NSSet *entries;
@property (retain, nonatomic) PDSRequestInfo *requestInfo;

- (id)initWithEntries:(id)a0 requestInfo:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)hash;

@end
