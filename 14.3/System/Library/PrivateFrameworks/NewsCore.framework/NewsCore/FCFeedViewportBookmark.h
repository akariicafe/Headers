@class NSString;

@interface FCFeedViewportBookmark : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *externalGroupID;
@property (readonly, copy, nonatomic) NSString *internalGroupID;
@property (readonly, copy, nonatomic) NSString *articleID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithExternalGroupID:(id)a0 internalGroupID:(id)a1 articleID:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
