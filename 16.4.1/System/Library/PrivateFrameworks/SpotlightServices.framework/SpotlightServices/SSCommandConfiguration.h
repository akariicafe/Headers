@class SFCommand, NSString;

@interface SSCommandConfiguration : NSObject

@property (retain) SFCommand *command;
@property (retain) NSString *title;
@property (retain) NSString *symbol;

+ (id)commandButtonItemForAddressLocation:(id)a0;
+ (id)commandButtonItemForBirthday:(id)a0;
+ (id)commandButtonItemForEmail:(id)a0;
+ (id)commandButtonItemForPhoneNumber:(id)a0 contact:(id)a1;
+ (id)dialRequestURLWithPhoneNumber:(id)a0 contact:(id)a1;
+ (id)punchoutCommandWithScheme:(id)a0 host:(id)a1 path:(id)a2 queryItems:(id)a3;
+ (id)valueWithPrimaryCommand:(id)a0 copyString:(id)a1 copyTitle:(id)a2 previewCommandConfigurations:(id)a3;
+ (id)valueWithPrimaryCommand:(id)a0 copyString:(id)a1 copyTitle:(id)a2 previewCommandTitle:(id)a3;

- (void).cxx_destruct;
- (id)createSFCommandButtonItem;
- (id)initWithTitle:(id)a0 symbol:(id)a1 command:(id)a2;

@end
