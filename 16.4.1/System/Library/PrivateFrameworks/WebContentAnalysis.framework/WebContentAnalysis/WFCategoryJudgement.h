@interface WFCategoryJudgement : NSObject {
    float score;
    long long category;
}

+ (id)categoryJudgementWithCategory:(long long)a0 score:(float)a1;

- (float)score;
- (void)setScore:(float)a0;
- (void)setCategory:(long long)a0;
- (long long)category;
- (id)description;
- (long long)compareByScore:(id)a0;
- (long long)compareByCategory:(id)a0;

@end
