@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject {
    NSMutableDictionary *_iconURLStringToInfoDictionary;
    NSMutableDictionary *_iconUUIDToURLStringDictionary;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeAllRecords;
- (id)dateAddedForFaviconURLString:(id)a0 iconUUID:(id *)a1 size:(struct CGSize { double x0; double x1; } *)a2;
- (id)iconInfoForURLString:(id)a0;
- (void)removeRecordForIconUUIDs:(id)a0;
- (void)setDateAdded:(id)a0 forFaviconURLString:(id)a1 iconUUID:(id)a2 iconSize:(struct CGSize { double x0; double x1; })a3 hasGeneratedResolutions:(BOOL)a4;

@end
