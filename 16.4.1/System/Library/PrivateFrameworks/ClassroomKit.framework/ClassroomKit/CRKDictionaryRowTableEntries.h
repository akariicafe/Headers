@class NSString, NSArray;

@interface CRKDictionaryRowTableEntries : NSObject <CRKTableEntries> {
    NSArray *mObjects;
    NSArray *mKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (void).cxx_destruct;
- (id)initWithDictionaryObjects:(id)a0 keys:(id)a1;
- (id)entryAtRow:(unsigned long long)a0 column:(unsigned long long)a1;

@end
