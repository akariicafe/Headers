@interface PKAddressFinder : NSObject

- (void)searchForStreet:(id)a0 postalCode:(id)a1 country:(id)a2 withCompletion:(id /* block */)a3;
- (void)searchForLocalCompletion:(id)a0 withCompletion:(id /* block */)a1;

@end
