@class NSString, TUHandle;

@interface TUMetadataDestinationID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;

+ (id)metadataDestinationIDsForCHRecentCalls:(id)a0;
+ (id)metadataDestinationIDsForCHRecentCall:(id)a0;
+ (id)metadataDestinationIDForCall:(id)a0;

- (id)initWithHandle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDestinationID:(id)a0 isoCountryCode:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToMetadataDestinationID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
