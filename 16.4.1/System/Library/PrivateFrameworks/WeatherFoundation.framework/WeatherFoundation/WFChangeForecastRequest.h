@class WFLocation;

@interface WFChangeForecastRequest : WFTask

@property (readonly, copy, nonatomic) WFLocation *location;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (void)handleResponse:(id)a0;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)startWithService:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
