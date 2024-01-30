@class NSString;

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {
    void *mMap;
}

@property (nonatomic) double horizontalScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)count;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void)removeHeaderForKey:(unsigned int)a0;
- (void)setHeader:(id)a0 forKey:(unsigned int)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1 willModify:(BOOL)a2;
- (unsigned long long)flushableSize;
- (id)headerForKey:(unsigned int)a0 willModify:(BOOL)a1;
- (id)headerForKey:(unsigned int)a0 willModify:(BOOL)a1 createIfNotThere:(BOOL)a2;
- (unsigned int)lowerBound:(unsigned int)a0;
- (void)makeHeadersPerformSelector:(SEL)a0 willModify:(BOOL)a1;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (id)packageLocator;
- (void)removeAllHeaders;
- (void)shiftKeysAtIndex:(unsigned int)a0 amount:(int)a1;
- (unsigned int)upperBound:(unsigned int)a0;

@end
