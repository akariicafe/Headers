@class TSTPopUpMenuModel;

@interface TSTTableDataMultipleChoiceList : TSTTableDataObject {
    TSTPopUpMenuModel *mPopUpMenuModel;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initObjectWithPopUpMenuModel:(id)a0;

@end
