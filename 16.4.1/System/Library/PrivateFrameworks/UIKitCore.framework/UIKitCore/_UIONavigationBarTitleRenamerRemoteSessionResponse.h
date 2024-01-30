@class NSString;

@interface _UIONavigationBarTitleRenamerRemoteSessionResponse : BSActionResponse

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (readonly, nonatomic) BOOL shouldEndEditing;

+ (id)didCancelSessionResponse;
+ (id)didEndEditingResponse;
+ (id)shouldEndEditingResponse:(BOOL)a0;
+ (id)willBeginRenamingResponseWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (int)_action;

@end
