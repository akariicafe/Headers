@class NSString;

@interface VUIRolesEntity : NSObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *roleTitle;
@property (retain, nonatomic) NSString *personName;
@property (retain, nonatomic) NSString *characterName;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
