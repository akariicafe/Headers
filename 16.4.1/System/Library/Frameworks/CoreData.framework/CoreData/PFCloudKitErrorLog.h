@class NSMutableArray;

@interface PFCloudKitErrorLog : NSObject {
    NSMutableArray *_entries;
}

- (void)dealloc;
- (id)init;
- (id)description;

@end
