@interface BRCCountedSet : NSCountedSet {
    unsigned long long _totalCount;
}

- (unsigned long long)totalCount;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;

@end
