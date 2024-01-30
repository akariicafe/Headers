@class NSUUID, NSString, NSData;

@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int pid;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSData *cdHash;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isComplete;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
