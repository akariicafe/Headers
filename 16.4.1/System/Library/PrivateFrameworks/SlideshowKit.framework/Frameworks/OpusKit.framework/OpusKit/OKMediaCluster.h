@class NSString, NSMutableArray;

@interface OKMediaCluster : NSObject

@property (copy, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL isUnknown;

- (void)dealloc;
- (id)init;
- (id)uniqueURLs;

@end
