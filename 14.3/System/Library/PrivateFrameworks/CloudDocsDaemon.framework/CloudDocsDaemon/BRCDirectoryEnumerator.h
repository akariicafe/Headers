@class NSMutableArray;

@interface BRCDirectoryEnumerator : NSObject {
    NSMutableArray *_stack;
    BOOL _recursive;
    int *_err;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initForEnumeratingBelow:(id)a0 recursive:(BOOL)a1 error:(int *)a2;

@end
