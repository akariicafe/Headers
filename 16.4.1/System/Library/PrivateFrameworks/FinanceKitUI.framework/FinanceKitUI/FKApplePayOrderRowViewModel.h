@class NSString;

@interface FKApplePayOrderRowViewModel : NSObject

@property (readonly, copy, nonatomic) id /* block */ cellConfigurationHandler;
@property (readonly, copy, nonatomic) NSString *orderTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *orderIdentifier;
@property (readonly, copy, nonatomic) NSString *fulfillmentIdentifier;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *subtitleText;

- (void).cxx_destruct;
- (void)configureCell:(id)a0;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 fulfillmentIdentifier:(id)a2 cellConfigurationHandler:(id /* block */)a3;

@end
