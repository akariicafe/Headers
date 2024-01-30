@class NSString, NSData;

@interface CKDShortTokenLookupInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *routingKey;
@property (retain, nonatomic) NSData *shortSharingTokenHashData;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (nonatomic) BOOL forceDSRefetch;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
