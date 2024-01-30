@class NSArray;

@interface CWFANQPParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *scanResults;
@property (copy, nonatomic) NSArray *ANQPElementIDList;
@property (nonatomic) unsigned long long maximumCacheAge;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToANQPParameters:(id)a0;

@end
