@class NSNumber;

@interface ASDAccountStatusResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSNumber *accountID;
@property long long accountStatus;
@property BOOL hasCachedFamilyInfo;
@property (readonly) BOOL hasErrorStatus;

- (BOOL)hasResponseFlag:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
