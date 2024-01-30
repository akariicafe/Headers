@class NSDictionary, NSDate;

@interface _PSClustersArchive : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *archiveDate;
@property (readonly, nonatomic) NSDictionary *clustersDictionary;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClustersDictionary:(id)a0 archiveDate:(id)a1;

@end
