@interface _DRTopicInterestSummary : NSObject <NSCoding, NSCopying>

@property unsigned long long topicPresentationsCount;
@property unsigned long long topicSelectionsCount;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPresentationsCount:(unsigned long long)a0 selectionsCount:(unsigned long long)a1;

@end
