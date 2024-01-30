@class NSString, CHSWidgetMetrics, CHSWidget;

@interface CSComplicationDescriptor : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) CHSWidget *widget;
@property (readonly, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)layoutElement;
- (id)descriptorBlockedForScreenTimeExpiration:(BOOL)a0;
- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2 blockedForScreenTimeExpiration:(BOOL)a3;

@end
