@class MUGroupedExternalActionController, NSString, NSMutableDictionary, NSArray, MUTimeExpirableLRUCache;
@protocol MUExternalActionHandling;

@interface MUPlaceExternalActionMenuHelper : NSObject {
    MUTimeExpirableLRUCache *_iconCache;
    NSMutableDictionary *_lockupImagesByIdentifiers;
    MUGroupedExternalActionController *_resolver;
    id<MUExternalActionHandling> _actionHandler;
    NSArray *_partnerActionMenuElements;
}

@property (readonly, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) MUGroupedExternalActionController *actionController;
@property (nonatomic) BOOL isQuickAction;

- (void).cxx_destruct;
- (id)_buildMenuElementForViewModel:(id)a0 presentationOptions:(id)a1 isSingleProvider:(BOOL)a2;
- (void)_downloadImageWithURL:(id)a0 variant:(unsigned long long)a1 uniqueIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)buildMenuElementsWithPresentationOptions:(id)a0;
- (id)initWithExternalActionController:(id)a0 iconCache:(id)a1;

@end
