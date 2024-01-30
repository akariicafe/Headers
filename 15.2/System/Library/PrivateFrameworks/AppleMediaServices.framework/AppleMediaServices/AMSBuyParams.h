@class NSDictionary, NSMutableDictionary;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_backingDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *normalizedDictionary;
@property (readonly, nonatomic) double price;
@property (readonly, copy) NSDictionary *dictionary;

+ (id)buyParamsWithString:(id)a0;

- (id)initWithString:(id)a0;
- (void)setParameter:(id)a0 forKey:(id)a1;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void)clear;
- (id)stringValue;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)_parseBuyParams:(id)a0;
- (id)_normalizedDictionary;
- (id)requestDataWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)parameterForKey:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
