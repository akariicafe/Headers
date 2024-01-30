@class NSDictionary, NSURL, NSDate;

@interface _PHVariationInMemoryCachedValue : NSObject

@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSDate *expectedDate;
@property (readonly, nonatomic) BOOL isValid;

- (void).cxx_destruct;
- (id)_currentFileModificationDate;
- (id)initWithInfo:(id)a0 fileURL:(id)a1;

@end
