@class NSArray, NSMutableArray;

@interface TIRollingLog : NSObject <NSCopying> {
    NSMutableArray *_entries;
    unsigned long long _nextIndex;
    unsigned long long _count;
    unsigned long long _maxCount;
}

@property (readonly, nonatomic) NSArray *currentEntries;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMaxCount:(unsigned long long)a0;
- (void)addEntries:(id)a0;
- (void)addEntry:(id)a0;

@end
