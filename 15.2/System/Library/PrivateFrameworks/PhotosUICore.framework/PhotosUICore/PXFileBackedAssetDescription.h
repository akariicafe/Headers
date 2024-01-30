@class NSURL, NSMutableDictionary;

@interface PXFileBackedAssetDescription : NSObject {
    NSMutableDictionary *_descriptionDictionary;
}

@property (readonly, copy, nonatomic) NSURL *url;

+ (id)simpleImageDescriptionWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;

@end
