@class NSString, NSData, NSDate;

@interface WBSPasswordBreachCredential : NSObject

@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSData *persistentIdentifier;
@property (readonly, nonatomic) NSDate *dateLastModified;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSecItemDictionary:(id)a0;
- (id)initWithPassword:(id)a0 persistentIdentifier:(id)a1 dateLastModified:(id)a2;

@end
