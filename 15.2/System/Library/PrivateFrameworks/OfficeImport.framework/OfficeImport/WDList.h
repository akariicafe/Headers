@class WDDocument, NSMutableArray;

@interface WDList : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mLevelOverrides;
}

@property (readonly, nonatomic) int listId;
@property (readonly, nonatomic) int listDefinitionId;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)levelOverrideCount;
- (id)levelOverrideAt:(unsigned long long)a0;
- (id)levelOverrideForLevel:(unsigned char)a0;
- (void)removeLevelOverride:(id)a0;
- (id)levelOverrides;
- (BOOL)isAnyListLevelOverridden;
- (id)initWithDocument:(id)a0 listId:(int)a1 listDefinitionId:(int)a2;
- (id)addLevelOverrideWithLevel:(unsigned char)a0;

@end
