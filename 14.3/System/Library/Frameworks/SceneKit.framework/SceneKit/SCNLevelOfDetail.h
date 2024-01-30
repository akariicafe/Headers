@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding> {
    struct __C3DLOD { } *_lod;
    long long _mode;
    SCNGeometry *_geometry;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) SCNGeometry *geometry;
@property (readonly) double screenSpaceRadius;
@property (readonly) double worldSpaceDistance;

+ (id)levelOfDetailWithGeometry:(id)a0 screenSpaceRadius:(double)a1;
+ (id)levelOfDetailWithGeometry:(id)a0 worldSpaceDistance:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)thresholdValue;
- (void)encodeWithCoder:(id)a0;
- (const void *)__CFObject;
- (long long)thresholdMode;
- (void)_setupWithGeometry:(id)a0 thresholdMode:(long long)a1 value:(double)a2;
- (id)initWithGeometry:(id)a0 thresholdMode:(long long)a1 lod:(struct __C3DLOD { } *)a2;
- (void)_customEncodingOfSCNLevelOfDetail:(id)a0;
- (void)_didDecodeSCNLevelOfDetail:(id)a0;
- (id)initWithGeometry:(id)a0 thresholdMode:(long long)a1 thresholdValue:(id)a2;

@end
