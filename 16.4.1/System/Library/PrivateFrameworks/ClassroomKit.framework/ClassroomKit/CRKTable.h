@class NSString;
@protocol CRKTableEntries;

@interface CRKTable : NSObject {
    id<CRKTableEntries> mEntries;
}

@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)parsableTableWithKeyValuePairs:(id)a0;
+ (id)tableWithHeaders:(id)a0 keyPaths:(id)a1 objects:(id)a2;

- (id)initWithEntries:(id)a0;
- (void).cxx_destruct;
- (id)columnLengths;
- (unsigned long long)lengthOfLongestObjectInColumn:(unsigned long long)a0;

@end
