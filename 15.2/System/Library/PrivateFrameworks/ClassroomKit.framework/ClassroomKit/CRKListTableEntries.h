@class NSString, NSArray;

@interface CRKListTableEntries : NSObject <CRKTableEntries> {
    NSArray *mArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)entryAtRow:(unsigned long long)a0 column:(unsigned long long)a1;

@end
