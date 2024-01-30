@class NSData, NSMutableArray;

@interface NLParsecDataManager : NSObject {
    NSMutableArray *m_entries;
}

@property (readonly, nonatomic) NSData *serializableData;

+ (BOOL)supportsDomain:(id)a0;
+ (void)enumerateEntriesForSerializedData:(id)a0 withBlock:(id /* block */)a1;
+ (unsigned short)maxNumberOfPOIsAllowed;
+ (void)notifyStoredSerializedDataChanged;

- (void)dealloc;
- (id)getEntries;
- (void)addEntry:(id)a0 domain:(id)a1 metaData:(id)a2;
- (void)insertEntry:(id)a0;

@end
