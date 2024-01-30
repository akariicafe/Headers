@class NSDictionary, NSDate;

@interface CKMetric : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *startDate;
@property double duration;
@property double queueing;
@property double executing;
@property unsigned long long bytesUploaded;
@property unsigned long long bytesDownloaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property (copy) NSDictionary *totalBytesByChunkProfile;
@property (copy) NSDictionary *chunkCountByChunkProfile;
@property (copy) NSDictionary *fileCountByChunkProfile;

+ (id)unionDictionary:(id)a0 with:(id)a1;

- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
