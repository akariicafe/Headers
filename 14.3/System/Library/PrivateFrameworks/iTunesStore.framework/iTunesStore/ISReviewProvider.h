@interface ISReviewProvider : ISDataProvider <NSCopying>

@property (getter=isBackgroundReview) BOOL backgroundReview;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseData:(id)a0 returningError:(id *)a1;

@end
