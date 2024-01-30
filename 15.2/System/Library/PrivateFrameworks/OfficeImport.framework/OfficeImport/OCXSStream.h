@class NSMutableArray;

@interface OCXSStream : NSObject {
    NSMutableArray *mLevelStack;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasLevels;
- (int)currentContextDepth;
- (BOOL)popLevel;
- (int)currentContextChildDepth;
- (void)pushLevel:(int)a0 name:(const char *)a1;

@end
