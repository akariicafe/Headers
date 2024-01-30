@class NSString, NSArray, PHAsset, NSDate;

@interface PGSharingRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *assetLocalIdentifier;
@property (retain, nonatomic) NSString *momentLocalIdentifier;
@property (retain, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSArray *persons;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 date:(id)a1 persons:(id)a2 momentLocalIdentifier:(id)a3 assetLocalIdentifier:(id)a4;
- (id)initWithType:(unsigned long long)a0 date:(id)a1 persons:(id)a2 momentLocalIdentifier:(id)a3 asset:(id)a4;
- (void)prepareForPersistence;

@end
