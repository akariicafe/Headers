@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (BOOL)deniedReading;
- (BOOL)readingEnabled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)requestedReading;
- (BOOL)isCompatibleStatus:(long long)a0;
- (id)recordWithReadingDisabled;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)sharingEnabled;
- (id)description;
- (BOOL)deniedSharing;
- (BOOL)isEqual:(id)a0;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;
- (id)recordWithSharingDisabled;
- (id)_deepCopy;
- (BOOL)requestedSharing;
- (void)encodeWithCoder:(id)a0;

@end
