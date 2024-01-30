@class NSString, NSNumber;

@interface STMSizeCacheEntry : NSObject {
    NSString *_itemPath;
}

@property (retain) id item;
@property (readonly) NSString *itemPath;
@property (retain) NSNumber *itemSize;
@property unsigned long long status;
@property (copy) id /* block */ sizingBlock;

- (id)initWithContainer:(id)a0;
- (id)initWithPath:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)calculateSize;

@end
