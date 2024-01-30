@class NSString, UIColor;

@interface FCUIActivityBaubleDescription : NSObject <FCUIActivityBaubleDescribing>

@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) UIColor *tintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
