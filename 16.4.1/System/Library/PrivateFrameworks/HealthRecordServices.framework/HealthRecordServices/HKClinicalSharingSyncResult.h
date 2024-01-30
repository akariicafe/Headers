@class NSUUID, NSError, NSString;

@interface HKClinicalSharingSyncResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *accountID;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *lookupInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 error:(id)a1;
- (id)initWithAccountID:(id)a0 lookupInfo:(id)a1;
- (id)initWithAccountID:(id)a0 lookupInfo:(id)a1 error:(id)a2;

@end
