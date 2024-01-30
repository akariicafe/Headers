@class NSString, NSDictionary, NSURL, DDSAsset;

@interface DDSContentItem : NSObject

@property (retain, nonatomic) DDSAsset *parentAsset;
@property (retain, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) NSURL *path;
@property (readonly, nonatomic) NSDictionary *region;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *locale;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithParentAsset:(id)a0 contents:(id)a1;
- (BOOL)isEqualToContentItem:(id)a0;

@end
