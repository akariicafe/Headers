@class INIntent, NSString, NSData, ATXMemoryPressureMonitor;

@interface ATXHomeScreenWidgetIdentifiable : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXMemoryPressureObserver> {
    NSData *_intentProtoData;
    INIntent *_intent;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *extensionBundleId;
@property (copy, nonatomic) NSString *widgetKind;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) INIntent *intent;
@property (copy, nonatomic) NSString *widgetUniqueId;
@property (nonatomic, getter=isSuggestedWidget) BOOL suggestedWidget;
@property (nonatomic, getter=isOnboardingWidget) BOOL onboardingWidget;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)initFromDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (BOOL)isSameWidgetAsWidgetBundleId:(id)a0 widgetKind:(id)a1;
- (id)compactDescription;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)description;
- (void)handleMemoryPressure;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithMemoryPressureMonitor:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)encodeAsProto;
- (id)_dictionaryRepresentationIncludingFullIntent:(BOOL)a0;
- (id)dictionaryRepresentation;

@end
