@class NSMutableArray;

@interface SXMapSnapShotter : NSObject

@property (retain, nonatomic) NSMutableArray *snapshotters;

+ (id)serialQueue;

- (void).cxx_destruct;
- (id)init;
- (id /* block */)snapShotWithOptions:(id)a0 annotations:(id)a1 completionBlock:(id /* block */)a2;

@end
