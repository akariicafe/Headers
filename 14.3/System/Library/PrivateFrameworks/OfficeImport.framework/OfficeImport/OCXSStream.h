@class NSMutableArray;

@interface OCXSStream : NSObject {
    NSMutableArray *mLevelStack;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasLevels;
- (int)currentContextDepth;
- (BOOL)popLevel;
- (int)currentContextChildDepth;
- (void)pushLevel:(int)a0 name:(const char *)a1;

@end
