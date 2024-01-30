@class INIntent, NSString, NSData, ATXMemoryPressureMonitor, ATXHomeScreenPage;

@interface ATXHomeScreenWidgetIdentifiable : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXMemoryPressureObserver> {
    NSData *_intentProtoData;
    INIntent *_intent;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double score;
@property (copy, nonatomic) NSString *predictionSource;
@property (nonatomic) BOOL requiresAppLaunch;
@property (weak, nonatomic) ATXHomeScreenPage *page;
@property (copy, nonatomic) NSString *extensionBundleId;
@property (copy, nonatomic) NSString *widgetKind;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) INIntent *intent;
@property (copy, nonatomic) NSString *widgetUniqueId;
@property (nonatomic, getter=isSuggestedWidget) BOOL suggestedWidget;
@property (nonatomic, getter=isOnboardingWidget) BOOL onboardingWidget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProto:(id)a0;
- (void)handleMemoryPressure;
- (void)encodeWithCoder:(id)a0;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)_dictionaryRepresentationIncludingFullIntent:(BOOL)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)compactDescription;
- (BOOL)isSameWidgetAsWidgetBundleId:(id)a0 widgetKind:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMemoryPressureMonitor:(id)a0;

@end
