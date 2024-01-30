@class NSMutableDictionary;

@interface ATXModeFeatureSet : NSObject <NSSecureCoding> {
    NSMutableDictionary *_features;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setValue:(BOOL)a0 forBinaryFeatureOfType:(int)a1;
- (void)mergeWithFeatures:(id)a0;
- (BOOL)boolValueForFeatureType:(int)a0;
- (void)setValue:(id)a0 forFeatureType:(int)a1;
- (id)valueForFeatureType:(int)a0;
- (void)enumerateFeaturesUsingBlock:(id /* block */)a0;

@end
