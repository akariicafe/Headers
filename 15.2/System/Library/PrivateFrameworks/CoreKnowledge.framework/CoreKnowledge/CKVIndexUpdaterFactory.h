@interface CKVIndexUpdaterFactory : NSObject

- (id)skitRebuilderWithIndexManager:(id)a0 localization:(id)a1;
- (id)skitUpdaterWithWriteAccess:(id)a0 localization:(id)a1 originApp:(id)a2;
- (id)ftsRecordUpdaterWithDatabase:(id)a0 originApp:(id)a1 itemType:(long long)a2;
- (id)itemRecordUpdaterWithDatabase:(id)a0 originApp:(id)a1 itemType:(long long)a2 startTimeMicros:(long long)a3;

@end
