@class NSArray, NSString, NSMutableDictionary;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding> {
    NSMutableDictionary *_actionDisplayNames;
    NSMutableDictionary *_actionParameters;
    NSArray *_items;
    NSMutableDictionary *_priceDisplayNames;
}

@property (readonly, nonatomic) NSArray *personalizedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)actionParametersForItemIdentifier:(id)a0;
- (id)priceDisplayForItemType:(id)a0;
- (id)actionDisplayNameForItemType:(id)a0;
- (void)_setPersonalizedItems:(id)a0;
- (void)setActionDisplayNameString:(id)a0 forItemType:(id)a1;
- (void)setActionParameters:(id)a0 forItemIdentifier:(id)a1;
- (void)setPriceDisplayString:(id)a0 forItemType:(id)a1;

@end
