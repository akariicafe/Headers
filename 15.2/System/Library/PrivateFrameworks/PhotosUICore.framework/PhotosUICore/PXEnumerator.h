@class NSString;

@interface PXEnumerator : NSObject <PXFastEnumeration> {
    unsigned long long recursiveEnumerationValue;
}

@property (readonly) unsigned long long count;
@property (readonly, nonatomic) id firstObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextObject;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)reset;

@end
