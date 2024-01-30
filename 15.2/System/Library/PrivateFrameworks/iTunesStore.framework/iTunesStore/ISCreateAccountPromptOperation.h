@class NSString;

@interface ISCreateAccountPromptOperation : ISOperation

@property (nonatomic) long long responseType;
@property (retain, nonatomic) NSString *reason;

- (void)run;
- (void).cxx_destruct;
- (id)init;
- (id)initWithReason:(id)a0;
- (id)_newCreateAccountDialog;
- (long long)_mapCorrectSelectedButtonWithDialog:(id)a0;
- (BOOL)_hasActiveICloudAccount;

@end
