@class NSString, NSData, NSError;

@interface MBRestoreFailure : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *dataclass;
@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSData *icon;
@property (copy, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 dataclass:(id)a1 assetType:(id)a2 displayName:(id)a3 error:(id)a4;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
