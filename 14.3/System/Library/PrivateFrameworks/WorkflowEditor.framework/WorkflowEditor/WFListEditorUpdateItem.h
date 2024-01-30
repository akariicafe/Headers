@class NSNumber;

@interface WFListEditorUpdateItem : NSObject

@property (readonly, nonatomic) NSNumber *indexBeforeUpdate;
@property (readonly, nonatomic) NSNumber *indexAfterUpdate;
@property (readonly, nonatomic) unsigned long long updateAction;

+ (id)itemInsertedAtIndex:(unsigned long long)a0;
+ (id)itemUpdatedAtIndex:(unsigned long long)a0;
+ (id)itemDeletedAtIndex:(unsigned long long)a0;
+ (id)itemMovedFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAction:(unsigned long long)a0 indexBeforeUpdate:(id)a1 indexAfterUpdate:(id)a2;

@end
