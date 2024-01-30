@class NSArray;

@interface BLDownloadManifestResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *validDownloadIDs;

- (void).cxx_destruct;
- (id)initWithSSDownloadManifestResponse:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
