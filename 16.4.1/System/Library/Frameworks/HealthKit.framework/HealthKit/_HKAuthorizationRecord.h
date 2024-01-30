@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (BOOL)deniedSharing;
- (BOOL)deniedReading;
- (id)initWithCoder:(id)a0;
- (id)_deepCopy;
- (BOOL)sharingEnabled;
- (id)recordWithReadingDisabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)requestedSharing;
- (BOOL)requestedReading;
- (id)recordWithSharingDisabled;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)readingEnabled;
- (BOOL)isCompatibleStatus:(long long)a0;
- (void).cxx_destruct;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;

@end
