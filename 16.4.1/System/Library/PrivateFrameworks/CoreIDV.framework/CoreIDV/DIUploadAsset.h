@class NSUUID, NSData;

@interface DIUploadAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *assetID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 assetType:(long long)a1;

@end
