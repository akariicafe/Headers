@class NSSet, PDSRequestInfo;

@interface PDSRequest : NSObject

@property (readonly, nonatomic) NSSet *entries;
@property (retain, nonatomic) PDSRequestInfo *requestInfo;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithEntries:(id)a0 requestInfo:(id)a1;

@end
