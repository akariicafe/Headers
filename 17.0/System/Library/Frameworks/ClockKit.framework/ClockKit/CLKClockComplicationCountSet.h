@class NSOrderedSet, NSMutableOrderedSet;

@interface CLKClockComplicationCountSet : NSObject <NSCopying> {
    NSMutableOrderedSet *_orderedSet;
}

@property (readonly, nonatomic) NSOrderedSet *orderedSet;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendCount:(id)a0;
- (void)mergeSet:(id)a0;

@end
