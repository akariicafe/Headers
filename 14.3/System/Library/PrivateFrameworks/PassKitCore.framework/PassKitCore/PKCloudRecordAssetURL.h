@class NSData;

@interface PKCloudRecordAssetURL : PKCloudRecordObject {
    int _fd;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (id)initWithRecords:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)assetData;
- (void)encodeWithCoder:(id)a0;

@end
