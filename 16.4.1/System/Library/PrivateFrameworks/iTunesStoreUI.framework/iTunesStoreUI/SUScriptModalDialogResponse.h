@class NSString;

@interface SUScriptModalDialogResponse : NSObject

@property (nonatomic) long long buttonIndex;
@property (retain, nonatomic) NSString *textFieldValue;

- (void)dealloc;

@end
