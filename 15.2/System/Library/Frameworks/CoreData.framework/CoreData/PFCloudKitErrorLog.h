@class NSMutableArray;

@interface PFCloudKitErrorLog : NSObject {
    NSMutableArray *_entries;
}

- (id)description;
- (id)init;
- (void)dealloc;

@end
