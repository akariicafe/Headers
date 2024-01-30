@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {
    PDAnimationTarget *mTgtElement;
}

@property (retain, nonatomic) NSMutableArray *attributeNames;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)target;
- (BOOL)isEqual:(id)a0;
- (void)setTarget:(id)a0;

@end
