@class NSUUID, NSString, NSData;

@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int pid;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSData *cdHash;

- (BOOL)isComplete;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
