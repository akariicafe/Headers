@class NSDictionary, NSString;

@interface AXBuddyDataPackage : NSObject <NSSecureCoding>

@property (class, retain, nonatomic) NSDictionary *testData;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *accessibilityOptions;
@property (retain, nonatomic) NSString *axOSVersion;
@property (retain, nonatomic) NSString *axModel;
@property (retain, nonatomic) NSString *axPreferredContentSizeCategoryName;
@property (nonatomic) BOOL usesExtendedSlider;

+ (id)dataBlobForBuddy;
+ (id)dataPackageForCurrentSettings;
+ (id)deviceClassForBuddy;
+ (id)productVersionForBuddy;
+ (void)restoreDataBlobForBuddy:(id)a0;
+ (void)setTestData:(id)a0 forModel:(id)a1 hasHomeButton:(BOOL)a2 largeTextUsesExtendedRange:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)applySavedSettings;
- (void)processDomainDictionary:(id)a0;

@end
