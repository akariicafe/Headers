@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;
- (oneway void)release;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (const id *)_values;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)copy;
- (BOOL)_isDeallocating;
- (id)init;
- (id)description;
- (id)mutableCopy;
- (unsigned long long)retainCount;

@end
