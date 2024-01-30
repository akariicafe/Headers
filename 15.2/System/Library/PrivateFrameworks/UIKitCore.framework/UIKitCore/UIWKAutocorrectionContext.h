@class NSString;

@interface UIWKAutocorrectionContext : NSObject

@property (copy, nonatomic) NSString *contextBeforeSelection;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSString *contextAfterSelection;
@property (copy, nonatomic) NSString *markedText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInMarkedText;

- (void)dealloc;

@end
