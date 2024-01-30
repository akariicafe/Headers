@class NSArray, NSMutableArray;

@interface TIRollingLog : NSObject <NSCopying> {
    NSMutableArray *_entries;
    unsigned long long _nextIndex;
}

@property (readonly, nonatomic) NSArray *currentEntries;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long maxCount;

- (void)addEntries:(id)a0;
- (id)initWithMaxCount:(unsigned long long)a0;
- (void)addEntry:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
