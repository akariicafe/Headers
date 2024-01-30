@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (BOOL)readingEnabled;
- (BOOL)deniedReading;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isCompatibleStatus:(long long)a0;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;
- (id)_deepCopy;
- (BOOL)requestedReading;
- (BOOL)deniedSharing;
- (id)description;
- (id)recordWithSharingDisabled;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)sharingEnabled;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)requestedSharing;
- (unsigned long long)hash;
- (id)recordWithReadingDisabled;

@end
