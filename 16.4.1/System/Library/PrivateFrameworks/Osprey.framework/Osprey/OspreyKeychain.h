@interface OspreyKeychain : NSObject

- (id)createKeychainQuery;
- (BOOL)deleteDataWithIdentifier:(id)a0;
- (id)fetchDataWithIdentifier:(id)a0;
- (BOOL)saveData:(id)a0 withIdentifier:(id)a1;

@end
