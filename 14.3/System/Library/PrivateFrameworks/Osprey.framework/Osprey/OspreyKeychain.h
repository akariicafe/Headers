@interface OspreyKeychain : NSObject

- (id)fetchDataWithIdentifier:(id)a0;
- (BOOL)saveData:(id)a0 withIdentifier:(id)a1;
- (BOOL)deleteDataWithIdentifier:(id)a0;
- (id)createKeychainQuery;

@end
