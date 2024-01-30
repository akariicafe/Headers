@class NSDictionary, NSString, NSArray;

@interface AMSNotificationSettingsSection : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *footer;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *title;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 footer:(id)a1 items:(id)a2;

@end
