@class NSString, MediaService, NSUUID;

@interface MSDDefaultsInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *recordName;
@property (copy, nonatomic) NSString *recordZoneName;
@property (copy, nonatomic) NSString *recordType;
@property (readonly, nonatomic) MediaService *service;
@property (readonly, nonatomic) NSUUID *homeID;
@property (readonly, nonatomic) NSUUID *homeUserID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithService:(id)a0 homeID:(id)a1 homeUserID:(id)a2;

@end
