@interface WFCategoryJudgement : NSObject {
    float score;
    long long category;
}

+ (id)categoryJudgementWithCategory:(long long)a0 score:(float)a1;

- (long long)category;
- (void)setCategory:(long long)a0;
- (void)setScore:(float)a0;
- (float)score;
- (id)description;
- (long long)compareByCategory:(id)a0;
- (long long)compareByScore:(id)a0;

@end
