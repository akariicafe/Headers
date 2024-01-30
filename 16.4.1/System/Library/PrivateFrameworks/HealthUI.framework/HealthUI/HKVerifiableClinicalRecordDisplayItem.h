@class NSString, NSAttributedString;

@interface HKVerifiableClinicalRecordDisplayItem : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long subtitleStyle;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSAttributedString *attributedDetailText;

+ (id)subtitleItemWithTitleText:(id)a0 detailText:(id)a1 style:(long long)a2;
+ (id)valueItemWithTitleText:(id)a0 attributedDetailText:(id)a1;
+ (id)valueItemWithTitleText:(id)a0 detailText:(id)a1;

- (void).cxx_destruct;

@end
