@class NSData;

@interface PKCloudRecordAssetURL : PKCloudRecordObject {
    int _fd;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;

- (long long)compare:(id)a0;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRecords:(id)a0;
- (id)assetData;
- (id)description;
- (id)descriptionWithItem:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
