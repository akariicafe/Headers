@class NSError;

@interface NSObservedValue : NSObject {
    id _contents;
    id _lastOriginator;
    int _tag;
}

@property (retain) id value;
@property (retain) NSError *error;
@property BOOL finished;

- (id)copyToHeap;
- (BOOL)_isToManyChangeInformation;
- (id)description;
- (void)dealloc;
- (id)debugDescription;

@end
