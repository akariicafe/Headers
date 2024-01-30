@interface MKHTTPParser : NSObject

- (id)parse:(id)a0 hostname:(id)a1;
- (id)chunk:(id)a0 offset:(unsigned long long *)a1 done:(BOOL *)a2;
- (id)parts:(id)a0 boundary:(id)a1 container:(id)a2;

@end
