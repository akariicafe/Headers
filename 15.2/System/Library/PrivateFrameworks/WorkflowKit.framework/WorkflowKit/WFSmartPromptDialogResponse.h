@class NSArray;

@interface WFSmartPromptDialogResponse : WFRequestAuthorizationDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *promptedStatesData;

+ (id)updatedStatusFromResultCode:(unsigned long long)a0;
+ (id)prepareSmartPromptsDatabaseDataFromConfiguration:(id)a0 resultCode:(unsigned long long)a1 error:(id *)a2;
+ (id)prepareDeletionAuthorizationDatabaseDataFromConfiguration:(id)a0 resultCode:(unsigned long long)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(unsigned long long)a0 promptedStatesData:(id)a1;

@end
