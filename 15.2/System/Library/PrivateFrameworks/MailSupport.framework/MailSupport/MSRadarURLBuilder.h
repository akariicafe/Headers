@class NSString, NSArray;

@interface MSRadarURLBuilder : NSObject

@property (class, readonly, nonatomic) BOOL canOpenRadar;

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL prependSystemVersionToTitle;
@property (copy, nonatomic) NSString *radarDescription;
@property (nonatomic) BOOL appendStandardDisclaimerToDescription;
@property (nonatomic) BOOL appendSysdiagnoseHowTo;
@property (nonatomic) long long component;
@property (nonatomic) long long reproducibility;
@property (nonatomic) long long classification;
@property (copy, nonatomic) NSArray *extensionIdentifiers;

+ (id)radarURLWithBuilder:(id /* block */)a0;
+ (id)_componentInfoDictionaryFromComponent:(long long)a0;
+ (id)stringFromRadarClassification:(long long)a0;
+ (id)stringFromRadarReproducibility:(long long)a0;
+ (id)_URLFromQueryItems:(id)a0 builder:(id)a1;
+ (id)componentNameFromRadarComponent:(long long)a0;
+ (id)componentIDFromRadarComponent:(long long)a0;

- (void).cxx_destruct;
- (id)init;

@end
