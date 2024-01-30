@class NSString, CSSearchableItem, FPItem;

@interface CSFPItem : NSObject {
    FPItem *_internal;
}

@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) CSSearchableItem *searchableItem;

+ (void)initialize;
+ (id)itemWithFileURL:(id)a0 forEUID:(unsigned int)a1;
+ (id)itemWithFileURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithFPItem:(id)a0;

@end
