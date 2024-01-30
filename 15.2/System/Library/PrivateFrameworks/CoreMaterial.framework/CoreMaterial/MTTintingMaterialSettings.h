@class NSDictionary, NSString;

@interface MTTintingMaterialSettings : NSObject <MTTinting>

@property (readonly, copy, nonatomic) NSDictionary *tintColorDescription;
@property (readonly, nonatomic) struct CGColor { } *tintColor;
@property (readonly, nonatomic) double tintAlpha;
@property (readonly, copy, nonatomic) NSString *tintColorName;
@property (readonly, nonatomic) long long tintColorUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
