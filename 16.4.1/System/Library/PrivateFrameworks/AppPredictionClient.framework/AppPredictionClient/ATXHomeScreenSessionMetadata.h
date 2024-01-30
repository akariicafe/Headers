@class NSString;

@interface ATXHomeScreenSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *widgetUniqueId;
@property (retain, nonatomic) NSString *widgetBundleId;
@property (nonatomic) BOOL isWidgetInTodayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWidgetUniqueId:(id)a0 widgetBundleId:(id)a1 isWidgetInTodayView:(BOOL)a2;
- (BOOL)isEqualToATXHomeScreenSessionMetadata:(id)a0;

@end
