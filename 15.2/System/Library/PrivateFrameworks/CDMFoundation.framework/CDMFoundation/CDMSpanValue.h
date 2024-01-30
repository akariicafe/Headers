@class NSString;

@interface CDMSpanValue : NSObject

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *stringValue;

+ (id)fromString:(id)a0;

- (id)toDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStringValue:(id)a0;

@end
