@class NSDictionary, NSString;

@interface AXBuddyDataPackage : NSObject <NSSecureCoding>

@property (class, retain, nonatomic) NSDictionary *testData;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *accessibilityOptions;
@property (retain, nonatomic) NSString *axOSVersion;
@property (retain, nonatomic) NSString *axModel;
@property (retain, nonatomic) NSString *axPreferredContentSizeCategoryName;
@property (nonatomic) BOOL usesExtendedSlider;

+ (id)productVersionForBuddy;
+ (id)deviceClassForBuddy;
+ (id)dataPackageForCurrentSettings;
+ (void)setTestData:(id)a0 forModel:(id)a1 hasHomeButton:(BOOL)a2 largeTextUsesExtendedRange:(BOOL)a3;
+ (id)dataBlobForBuddy;
+ (void)restoreDataBlobForBuddy:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)applySavedSettings;
- (void)processDomainDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
