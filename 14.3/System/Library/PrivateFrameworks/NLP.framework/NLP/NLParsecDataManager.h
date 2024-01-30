@class NSData, NSMutableArray;

@interface NLParsecDataManager : NSObject {
    NSMutableArray *m_entries;
}

@property (readonly, nonatomic) NSData *serializableData;

+ (void)enumerateEntriesForSerializedData:(id)a0 withBlock:(id /* block */)a1;
+ (unsigned short)maxNumberOfPOIsAllowed;
+ (void)notifyStoredSerializedDataChanged;
+ (BOOL)supportsDomain:(id)a0;

- (void)dealloc;
- (void)insertEntry:(id)a0;
- (void)addEntry:(id)a0 domain:(id)a1 metaData:(id)a2;
- (id)getEntries;

@end
