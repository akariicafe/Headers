@interface TCMessagePlaceholderInfo : NSObject {
    id mKey;
    BOOL mInUse;
}

- (id)key;
- (BOOL)isInUse;
- (void)setInUse:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
