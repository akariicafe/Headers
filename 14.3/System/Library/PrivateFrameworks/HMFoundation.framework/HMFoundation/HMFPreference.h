@class NSString, NSData, NSNumber;
@protocol NSObject;

@interface HMFPreference : HMFObject

@property (readonly) NSString *key;
@property (readonly) unsigned long long options;
@property (copy) id<NSObject> value;
@property (readonly, weak) HMFPreference *parent;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSData *dataValue;

+ (id)shortDescription;

- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithKey:(id)a0 options:(unsigned long long)a1 defaultValue:(id)a2;
- (id)initWithKey:(id)a0 options:(unsigned long long)a1 defaultValue:(id)a2 parent:(id)a3;

@end
