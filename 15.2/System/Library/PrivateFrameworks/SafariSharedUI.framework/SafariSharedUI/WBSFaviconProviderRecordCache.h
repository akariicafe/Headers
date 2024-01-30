@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject {
    NSMutableDictionary *_iconURLStringToInfoDictionary;
    NSMutableDictionary *_iconUUIDToURLStringDictionary;
}

- (id)iconInfoForURLString:(id)a0;
- (void)removeAllRecords;
- (void).cxx_destruct;
- (id)init;
- (void)setDateAdded:(id)a0 forFaviconURLString:(id)a1 iconUUID:(id)a2 iconSize:(struct CGSize { double x0; double x1; })a3 hasGeneratedResolutions:(BOOL)a4;
- (id)dateAddedForFaviconURLString:(id)a0 iconUUID:(id *)a1 size:(struct CGSize { double x0; double x1; } *)a2;
- (void)removeRecordForIconUUIDs:(id)a0;

@end
