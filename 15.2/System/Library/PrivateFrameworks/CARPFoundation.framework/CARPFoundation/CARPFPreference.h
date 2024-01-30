@class NSString, NSData, NSNumber;
@protocol NSObject;

@interface CARPFPreference : CARPFObject

@property (readonly) NSString *key;
@property (readonly) unsigned long long options;
@property (copy) id<NSObject> value;
@property (readonly, weak) CARPFPreference *parent;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSData *dataValue;

+ (id)carpf_shortDescription;

- (id)initWithKey:(id)a0 options:(unsigned long long)a1 defaultValue:(id)a2 parent:(id)a3;
- (id)initWithKey:(id)a0 options:(unsigned long long)a1 defaultValue:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)carpf_shortDescription;

@end
