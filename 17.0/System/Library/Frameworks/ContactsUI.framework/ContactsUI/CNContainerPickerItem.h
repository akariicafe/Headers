@class NSString;

@interface CNContainerPickerItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
