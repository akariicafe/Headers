@class NSString, NSArray;
@protocol CRKTableEntries;

@interface CRKTableEntriesWithAddedRow : NSObject <CRKTableEntries> {
    id<CRKTableEntries> mOrigin;
    unsigned long long mIndex;
    NSArray *mEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)rowCount;
- (unsigned long long)columnCount;
- (id)entryAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (id)initWithOrigin:(id)a0 index:(unsigned long long)a1 entries:(id)a2;

@end
