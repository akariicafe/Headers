@class NSString;

@interface MSVSystemDialogTextField : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isSecure) BOOL secure;
@property (nonatomic) long long keyboardType;

+ (id)textFieldWithTitle:(id)a0;
+ (id)textFieldWithTitle:(id)a0 secure:(BOOL)a1;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;

@end
