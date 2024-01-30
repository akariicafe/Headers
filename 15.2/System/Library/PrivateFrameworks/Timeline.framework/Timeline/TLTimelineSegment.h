@class TLTimelineEntryNode;

@interface TLTimelineSegment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TLTimelineEntryNode *leftmostNode;
@property (readonly, nonatomic) TLTimelineEntryNode *rightmostNode;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double duration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsNode:(id)a0;
- (unsigned long long)hash;
- (id)initWithLeftmostNode:(id)a0 rightmostNode:(id)a1 count:(unsigned long long)a2;
- (BOOL)shiftRight;
- (BOOL)shiftLeft;
- (BOOL)expandToRight;
- (BOOL)expandToLeft;
- (BOOL)contractFromRight;
- (BOOL)contractFromLeft;

@end
