@class NSString;

@interface SUComposeTextFieldConfiguration : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderInsets;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long maxLength;
@property (retain, nonatomic) NSString *placeholder;
@property (nonatomic, getter=isRequired) BOOL required;
@property (retain, nonatomic) NSString *value;

- (void)dealloc;

@end
