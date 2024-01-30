@interface BRCCountedSet : NSCountedSet {
    unsigned long long _totalCount;
}

- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (unsigned long long)totalCount;

@end
