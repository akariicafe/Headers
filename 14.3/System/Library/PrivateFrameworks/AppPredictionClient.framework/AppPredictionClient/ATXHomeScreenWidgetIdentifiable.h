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

- (void)handleMemoryPressure;
- (id)compactDescription;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_dictionaryRepresentationIncludingFullIntent:(BOOL)a0;
- (void)dealloc;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSameWidgetAsWidgetBundleId:(id)a0 widgetKind:(id)a1;
- (id)dictionaryRepresentation;
- (id)initWithMemoryPressureMonitor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
