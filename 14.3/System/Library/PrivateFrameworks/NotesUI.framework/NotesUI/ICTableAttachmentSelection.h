@class NSArray;

@interface ICTableAttachmentSelection : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *rows;
@property (readonly, nonatomic) BOOL isRangeOrSpanningSelection;
@property (nonatomic) BOOL moving;
@property (nonatomic) BOOL draggingText;
@property (readonly, nonatomic) BOOL valid;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unselect;
- (BOOL)isEqual:(id)a0;
- (void)selectCellAtColumn:(id)a0 row:(id)a1;
- (BOOL)removeColumns:(id)a0 rows:(id)a1 previousColumns:(id)a2 previousRows:(id)a3;
- (void)selectColumns:(id)a0;
- (void)selectRows:(id)a0;
- (void)selectCellRangeAtColumns:(id)a0 rows:(id)a1;
- (void)setSelectionEqualTo:(id)a0;
- (BOOL)removeColumns:(id)a0 rows:(id)a1;

@end
