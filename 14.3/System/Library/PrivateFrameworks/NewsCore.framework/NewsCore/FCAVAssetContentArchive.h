@class NTPBAVAsset;

@interface FCAVAssetContentArchive : FCContentArchive {
    NTPBAVAsset *_avAsset;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)manifest;
- (id)initWithAVAsset:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
