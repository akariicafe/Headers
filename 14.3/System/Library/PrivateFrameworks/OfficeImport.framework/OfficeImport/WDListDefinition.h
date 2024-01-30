@class NSString, WDDocument, NSMutableArray;

@interface WDListDefinition : NSObject <NSCopying> {
    WDDocument *mDocument;
    int mType;
    NSMutableArray *mLevels;
}

@property (readonly, nonatomic) int listDefinitionId;
@property (readonly, nonatomic) NSString *styleId;
@property (copy, nonatomic) NSString *styleRefId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(int)a0;
- (id)description;
- (int)type;
- (int)levelCount;
- (id)levelAt:(int)a0;
- (id)addLevel;
- (void)removeLastLevel;
- (id)initWithDocument:(id)a0 listDefinitionId:(int)a1 styleId:(id)a2;

@end
