@class NSString;

@interface HKCloudSyncRecordIDDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithRecordName:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
