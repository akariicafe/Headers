@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface TTKTestCase : NSObject

@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSArray *records;
@property (readonly, copy, nonatomic) NSMutableDictionary *annotations;
@property (readonly, copy, nonatomic) NSString *intendedText;

+ (id)convertToIsolatedWordMode:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 records:(id)a1;
- (id)initWithMetadata:(id)a0 records:(id)a1 intendedText:(id)a2;
- (id)toJsonDictionary;

@end
