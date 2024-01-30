@class NSString, _TtC18ActivityUIServices26ActivityItemMetricsRequest;

@interface ActivityUIServices.SystemApertureMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {
    void /* unknown type, empty encoding */ _expandedMetricsRequest;
    void /* unknown type, empty encoding */ _compactLeadingMetricsRequest;
    void /* unknown type, empty encoding */ _compactTrailingMetricsRequest;
    void /* unknown type, empty encoding */ _minimalMetricsRequest;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *expandedMetricsRequest;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *compactLeadingMetricsRequest;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *compactTrailingMetricsRequest;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *minimalMetricsRequest;
@property (nonatomic) void /* unknown type, empty encoding */ obstructionSize;
@property (nonatomic) void /* unknown type, empty encoding */ obstructionTopMargin;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithObstructionSize:(struct CGSize { double x0; double x1; })a0 obstructionTopMargin:(double)a1 expandedMetricsRequest:(id)a2 compactLeadingMetricsRequest:(id)a3 compactTrailingMetricsRequest:(id)a4 minimalMetricsRequest:(id)a5;
- (id)initWithObstructionSize:(struct CGSize { double x0; double x1; })a0 expandedMetricsRequest:(id)a1 compactLeadingMetricsRequest:(id)a2 compactTrailingMetricsRequest:(id)a3 minimalMetricsRequest:(id)a4;

@end
