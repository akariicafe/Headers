@class NSString, NSArray;
@protocol CRKTableEntries;

@interface CRKTableEntriesWithAddedColumn : NSObject <CRKTableEntries> {
    id<CRKTableEntries> mOrigin;
    unsigned long long mIndex;
    NSArray *mEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (void).cxx_destruct;
- (id)entryAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (id)initWithOrigin:(id)a0 index:(unsigned long long)a1 entries:(id)a2;

@end
