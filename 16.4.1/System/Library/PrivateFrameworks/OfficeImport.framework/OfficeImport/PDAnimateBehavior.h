@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {
    PDAnimationTarget *mTgtElement;
}

@property (retain, nonatomic) NSMutableArray *attributeNames;

- (BOOL)isEqual:(id)a0;
- (id)target;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;

@end
