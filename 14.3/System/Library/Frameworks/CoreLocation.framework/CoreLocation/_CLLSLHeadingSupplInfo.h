@class _CLLSLMapRoadSegment;

@interface _CLLSLHeadingSupplInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _CLLSLMapRoadSegment *roadSegment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
