@class NSURL, NSString, NTPBAsset;

@interface FCAssetContentArchive : FCContentArchive {
    NTPBAsset *_asset;
    NSURL *_remoteURL;
    NSString *_filePath;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)manifest;
- (id)description;
- (id)unarchiveIntoContentContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
