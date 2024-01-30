@class NSString, NSURL, NSDate;

@interface GKSavedGame : NSObject <NSCopying>

@property (retain) NSString *name;
@property (retain) NSString *deviceName;
@property (retain) NSDate *modificationDate;
@property (retain) NSURL *fileURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;

@end
