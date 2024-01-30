@class TSTPopUpMenuModel;

@interface TSTTableDataMultipleChoiceList : TSTTableDataObject {
    TSTPopUpMenuModel *mPopUpMenuModel;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithPopUpMenuModel:(id)a0;

@end
