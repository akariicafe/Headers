@class NSArray;

@interface ChronoKit.WidgetPreviewTimelineEntry : TLTimelineBlobEntry <TLPreviewTimelineEntry> {
    void /* unknown type, empty encoding */ tl_errors;
    void /* unknown type, empty encoding */ tl_selectableRegions;
    void /* unknown type, empty encoding */ backgroundColor;
    void /* unknown type, empty encoding */ renderEffectIDs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSArray *tl_errors;
@property (nonatomic, copy) NSArray *tl_selectableRegions;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBlob:(id)a0 atDate:(id)a1;

@end
