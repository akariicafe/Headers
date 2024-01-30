@interface SKUIWishlistDataConsumer : SSVURLDataConsumer

- (id)objectForData:(id)a0 response:(id)a1 error:(id *)a2;
- (id)_errorWithData:(id)a0 MIMEType:(id)a1;
- (id)_itemsWithJSONData:(id)a0 error:(id *)a1;

@end
