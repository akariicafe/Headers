@class NSString, NSNumber;

@interface CFXFilterEffectContentDataSource : NSObject <JFXFilterEffectContentDataSource>

@property (nonatomic) BOOL isContentAvailable;
@property (nonatomic) unsigned long long contentAvailability;
@property (retain, nonatomic) NSString *contentVersion;
@property (retain, nonatomic) NSString *localizedDisplayName;
@property (retain, nonatomic) NSString *localizedAccessibilityName;
@property (retain, nonatomic) NSNumber *requiredProVideoVersion;
@property (nonatomic) BOOL isContentNew;
@property (retain, nonatomic) NSNumber *isExpensive;
@property (nonatomic) BOOL isStyleTransfer;
@property (retain, nonatomic) NSNumber *proxyRenderScale;
@property (nonatomic) long long inverseToneMapOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEffectID:(id)a0;

@end
