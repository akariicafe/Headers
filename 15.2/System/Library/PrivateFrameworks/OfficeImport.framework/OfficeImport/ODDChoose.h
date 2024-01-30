@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (id)whens;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addWhen:(id)a0;
- (id)otherwise;
- (void)setOtherwise:(id)a0;

@end
