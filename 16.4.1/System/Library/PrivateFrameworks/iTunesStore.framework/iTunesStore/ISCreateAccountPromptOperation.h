@class NSString;

@interface ISCreateAccountPromptOperation : ISOperation

@property (nonatomic) long long responseType;
@property (retain, nonatomic) NSString *reason;

- (void)run;
- (id)initWithReason:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasActiveICloudAccount;
- (long long)_mapCorrectSelectedButtonWithDialog:(id)a0;
- (id)_newCreateAccountDialog;

@end
