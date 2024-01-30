@class NSMutableArray;

@interface SXMapSnapShotter : NSObject

@property (retain, nonatomic) NSMutableArray *snapshotters;

+ (id)serialQueue;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)snapShotWithOptions:(id)a0 annotations:(id)a1 completionBlock:(id /* block */)a2;

@end
