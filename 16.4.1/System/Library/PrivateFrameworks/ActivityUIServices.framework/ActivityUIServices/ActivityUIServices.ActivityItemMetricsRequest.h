@class _TtC18ActivityUIServices20SizeDimensionRequest, _TtC18ActivityUIServices18ActivityEdgeInsets, NSString;

@interface ActivityUIServices.ActivityItemMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {
    void /* unknown type, empty encoding */ _widthRequest;
    void /* unknown type, empty encoding */ _heightRequest;
    void /* unknown type, empty encoding */ _edgeInsets;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) _TtC18ActivityUIServices20SizeDimensionRequest *widthRequest;
@property (nonatomic, retain) _TtC18ActivityUIServices20SizeDimensionRequest *heightRequest;
@property (nonatomic) void /* unknown type, empty encoding */ cornerRadius;
@property (nonatomic) void /* unknown type, empty encoding */ clipMargin;
@property (nonatomic, retain) _TtC18ActivityUIServices18ActivityEdgeInsets *edgeInsets;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } initialSize;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } maximumSize;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2 edgeInsets:(id)a3 clipMargin:(double)a4;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2 edgeInsets:(id)a3;

@end
