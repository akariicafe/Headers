@class NSArray, NSString, NSMutableArray;

@interface MDLObjectContainer : NSObject <MDLObjectContainerComponent> {
    NSMutableArray *_objects;
}

@property (readonly) unsigned long long count;
@property (readonly, retain, nonatomic) NSArray *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;

@end
