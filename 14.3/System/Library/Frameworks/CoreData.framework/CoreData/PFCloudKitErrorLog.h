@class NSArray, NSMutableArray;

@interface PFCloudKitErrorLog : NSObject {
    NSMutableArray *_entries;
}

@property (readonly, nonatomic) NSArray *entries;

- (id)init;
- (void)dealloc;
- (void)logEncounteredError:(id)a0 withAnnotation:(id)a1;
- (id)description;

@end
