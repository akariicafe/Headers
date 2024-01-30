@class NSString, NSMutableArray, NSMutableDictionary;

@interface CNHeap : NSObject

@property (retain) NSString *rawDataString;
@property (retain) NSMutableArray *heapObjects;
@property (retain, nonatomic) NSMutableDictionary *heapObjectsByClassAndBinary;

- (void).cxx_destruct;

@end
