@class NSString, NSDictionary, NSMutableDictionary, DESUserDefaultsStoreRecord;

@interface DESDebugRecord : NSObject {
    NSMutableDictionary *_debugInfo;
    DESUserDefaultsStoreRecord *_storeRecord;
}

@property (readonly, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSDictionary *debugInfo;

+ (id)recordIDFromPluginID:(id)a0 taskSource:(long long)a1;

- (id)initWithRecordID:(id)a0 debugInfo:(id)a1;
- (id)description;
- (id)initFromStoreWithPluginID:(id)a0 taskSource:(long long)a1;
- (void).cxx_destruct;
- (void)addForTaskID:(id)a0 result:(long long)a1 description:(id)a2;
- (BOOL)commitWithError:(id *)a0;
- (id)stringForResult:(id)a0;
- (id)initWithPluginID:(id)a0 taskSource:(long long)a1;

@end
