@class NSMutableArray;

@interface BRCDirectoryEnumerator : NSObject {
    NSMutableArray *_stack;
    BOOL _recursive;
    int *_err;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initForEnumeratingBelow:(id)a0 recursive:(BOOL)a1 error:(int *)a2;

@end
