@class NSString;

@interface HKElectrocardiogramRegulatedVersion : NSObject

@property (readonly, copy, nonatomic) NSString *updateVersion;
@property (readonly, copy, nonatomic) NSString *featureVersion;

- (void).cxx_destruct;
- (id)_featureVersionFromUpdateVersion:(id)a0;
- (id)_updateVersionFromSourceVersion:(id)a0 algorithmVersion:(long long)a1;
- (BOOL)_validateSourceVersion:(id)a0 algorithmVersion:(long long)a1;
- (id)initWithSourceVersion:(id)a0 algorithmVersion:(long long)a1;

@end
