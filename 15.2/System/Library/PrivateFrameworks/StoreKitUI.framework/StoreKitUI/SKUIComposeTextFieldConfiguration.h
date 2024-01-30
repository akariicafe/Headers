@class NSString;

@interface SKUIComposeTextFieldConfiguration : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderInsets;
@property (nonatomic) long long columnIndex;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long maxLength;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic, getter=isRequired) BOOL required;
@property (copy, nonatomic) NSString *value;

- (void).cxx_destruct;

@end
