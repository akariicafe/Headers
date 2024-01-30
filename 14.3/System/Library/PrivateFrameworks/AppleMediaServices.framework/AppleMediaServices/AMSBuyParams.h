@class NSDictionary, NSMutableDictionary;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_backingDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double price;
@property (readonly) NSDictionary *dictionary;

+ (id)buyParamsWithString:(id)a0;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)propertyForKey:(id)a0;
- (id)stringValue;
- (void)_parseBuyParams:(id)a0;
- (id)_normalizedDictionary;
- (id)buyParametersForRequest;
- (void)importURLEncodedBuyParams:(id)a0;
- (id)requestDataWithError:(id *)a0;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
