@class NSArray;

@interface _CLLSLMapRoadSegment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long roadID;
@property (copy, nonatomic) NSArray *polylines;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
