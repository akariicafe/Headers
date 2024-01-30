@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (id)init;
- (void).cxx_destruct;
- (id)whens;
- (id)description;
- (void)addWhen:(id)a0;
- (id)otherwise;
- (void)setOtherwise:(id)a0;

@end
