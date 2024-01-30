@class NSString;
@protocol NUPage;

@interface NUPagingBlueprintItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<NUPage> page;

- (void).cxx_destruct;
- (id)initWithPage:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPageID:(id)a0;

@end
