@interface VCRecordZoneParser : NSObject

+ (BOOL)shouldIgnoreZoneID:(id)a0;
+ (BOOL)parseZoneID:(id)a0 intoIndex:(long long *)a1;
+ (id)sortedVoiceShortcutZoneIDsFromZoneIDs:(id)a0;
+ (id /* block */)activeRecordZone:(id /* block */)a0;

@end
