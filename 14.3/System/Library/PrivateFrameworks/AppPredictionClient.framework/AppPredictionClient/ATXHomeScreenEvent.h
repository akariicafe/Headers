@class ATXHomeScreenEventMetadata, NSString, NSArray, NSDate;

@interface ATXHomeScreenEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *eventTypeString;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (retain, nonatomic) NSString *stackId;
@property (retain, nonatomic) NSString *widgetBundleId;
@property (retain, nonatomic) NSString *widgetKind;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) unsigned long long widgetSize;
@property (nonatomic) unsigned long long stackKind;
@property (nonatomic) unsigned long long stackLocation;
@property (retain, nonatomic) NSString *intentDescription;
@property (retain, nonatomic) NSString *widgetUniqueId;
@property (retain, nonatomic) NSArray *suggestionIds;
@property (retain, nonatomic) ATXHomeScreenEventMetadata *metadata;

+ (id)eventForPageShownWithIndex:(unsigned long long)a0 widgetsByStack:(id)a1 blendingCacheIdentifier:(id)a2;

- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToATXHomeScreenEvent:(id)a0;

@end
