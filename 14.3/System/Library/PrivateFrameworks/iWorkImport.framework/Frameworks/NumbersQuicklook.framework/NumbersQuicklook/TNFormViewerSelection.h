@interface TNFormViewerSelection : TSKSelection

@property (readonly, nonatomic) unsigned int recordIndex;
@property (readonly, nonatomic) unsigned short fieldIndex;

+ (id)selection;
+ (Class)archivedSelectionClass;
+ (id)selectionForRecordIndex:(unsigned int)a0 fieldIndex:(unsigned short)a1;
+ (id)selectionForRecordIndex:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRecordIndex:(unsigned int)a0 fieldIndex:(unsigned short)a1;

@end
