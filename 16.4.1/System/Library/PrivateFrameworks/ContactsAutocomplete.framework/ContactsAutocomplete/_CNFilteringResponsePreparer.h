@interface _CNFilteringResponsePreparer : _CNAutocompleteResponsePreparerDecorator

@property (readonly, copy) id /* block */ filter;

- (void).cxx_destruct;
- (id)prepareResults:(id)a0;
- (id)initWithResponsePreparer:(id)a0 delegate:(id)a1 filter:(id /* block */)a2;

@end
