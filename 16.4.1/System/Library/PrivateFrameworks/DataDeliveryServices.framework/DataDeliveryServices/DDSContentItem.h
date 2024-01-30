@class NSString, NSDictionary, NSURL, DDSAsset;

@interface DDSContentItem : NSObject

@property (retain, nonatomic) DDSAsset *parentAsset;
@property (retain, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) NSURL *path;
@property (readonly, nonatomic) NSDictionary *region;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *locale;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithParentAsset:(id)a0 contents:(id)a1;
- (BOOL)isEqualToContentItem:(id)a0;

@end
