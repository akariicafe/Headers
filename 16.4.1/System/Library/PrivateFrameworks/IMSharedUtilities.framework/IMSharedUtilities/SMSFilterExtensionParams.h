@class NSString;

@interface SMSFilterExtensionParams : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long action;
@property unsigned long long subAction;
@property unsigned long long filterMode;
@property unsigned long long orderOfPlacementInUI;
@property unsigned long long category;
@property unsigned long long subCategory;
@property (retain, nonatomic) NSString *filterModeStringValue;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *folderName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
