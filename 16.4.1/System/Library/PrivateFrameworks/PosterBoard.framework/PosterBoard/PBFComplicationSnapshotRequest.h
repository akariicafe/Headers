@class CHSWidgetMetrics, CHSWidget;

@interface PBFComplicationSnapshotRequest : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) CHSWidget *widget;
@property (readonly, nonatomic) CHSWidgetMetrics *metrics;

+ (id)requestForComplicationLookupInfo:(id)a0;
+ (id)requestsForPreview:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithWidget:(id)a0 metrics:(id)a1;
- (void).cxx_destruct;

@end
