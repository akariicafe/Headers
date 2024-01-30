@class NSIndexSet, NSString;

@interface _SSVPlayActivityEndpointRevisionInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSIndexSet *additionalPendingRevisionsIndexSet;
@property (nonatomic) unsigned long long currentRevision;
@property (copy, nonatomic) NSString *revisionVersionToken;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
