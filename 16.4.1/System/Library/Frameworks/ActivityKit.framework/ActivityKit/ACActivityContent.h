@class NSData, NSDate;

@interface ACActivityContent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *contentData;
@property (copy, nonatomic) NSDate *staleDate;
@property (nonatomic) double relevanceScore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithContentData:(id)a0 staleDate:(id)a1 relevanceScore:(double)a2;

@end
