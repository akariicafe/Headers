@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (const id *)_values;
- (id)init;
- (id)mutableCopy;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)copy;
- (id)description;
- (id)retain;
- (unsigned long long)count;
- (Class)classForCoder;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;

@end
