@class NSIndexPath;

@interface _MapUpdate : NSObject

@property (nonatomic) BOOL isSectionUpdate;
@property (nonatomic) BOOL isInsert;
@property (nonatomic) BOOL isDelete;
@property (nonatomic) BOOL isMove;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSIndexPath *moveFromIndexPath;
@property (retain, nonatomic) NSIndexPath *moveToIndexPath;
@property (nonatomic) long long index;
@property (nonatomic) long long section;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } insertRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } deleteRange;
@property (nonatomic) long long moveFromSection;
@property (nonatomic) long long moveToSection;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } moveFromRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } moveToRange;

+ (id)itemMoveFromIndexIndexPath:(id)a0 toIndexPath:(id)a1 fromIndex:(long long)a2 toIndex:(long long)a3;
+ (id)itemDeleteSection:(long long)a0 deleteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)itemDeleteItemAtIndexPath:(id)a0 index:(long long)a1;
+ (id)itemInsertSection:(long long)a0 insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)itemInsertItemAtIndexPath:(id)a0 index:(long long)a1;
+ (id)itemMoveSection:(long long)a0 toSection:(long long)a1 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

- (void).cxx_destruct;
- (id)description;
- (id)reverseUpdateItem;

@end
