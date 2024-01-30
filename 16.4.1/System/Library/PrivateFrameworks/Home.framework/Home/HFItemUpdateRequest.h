@class NSSet;

@interface HFItemUpdateRequest : NSObject

@property (readonly, nonatomic) NSSet *itemsToUpdate;
@property (readonly, nonatomic) NSSet *itemsProvidersToReload;
@property (readonly, nonatomic) SEL senderSelector;

+ (id)requestToReloadItemProviders:(id)a0 senderSelector:(SEL)a1;
+ (id)requestToUpdateItems:(id)a0 senderSelector:(SEL)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithItemProviders:(id)a0 items:(id)a1 senderSelector:(SEL)a2;

@end
