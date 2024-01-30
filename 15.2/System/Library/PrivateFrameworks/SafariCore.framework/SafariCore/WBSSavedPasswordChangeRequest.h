@class NSString, NSArray, WBSSavedPassword, NSMutableArray, WBSTOTPGenerator;

@interface WBSSavedPasswordChangeRequest : NSObject

@property (retain, nonatomic) WBSSavedPassword *savedPassword;
@property (copy, nonatomic) NSString *user;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSMutableArray *sites;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (readonly, nonatomic) NSArray *userVisibleSites;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL hasUserChange;
@property (readonly, nonatomic) BOOL hasTOTPGeneratorChange;

- (void).cxx_destruct;

@end
