@class NSString, WDDocument, NSMutableArray;

@interface WDListDefinition : NSObject <NSCopying> {
    WDDocument *mDocument;
    int mType;
    NSMutableArray *mLevels;
}

@property (readonly, nonatomic) int listDefinitionId;
@property (readonly, nonatomic) NSString *styleId;
@property (copy, nonatomic) NSString *styleRefId;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (void)setType:(int)a0;
- (int)levelCount;
- (id)levelAt:(int)a0;
- (id)addLevel;
- (void)removeLastLevel;
- (id)initWithDocument:(id)a0 listDefinitionId:(int)a1 styleId:(id)a2;

@end
