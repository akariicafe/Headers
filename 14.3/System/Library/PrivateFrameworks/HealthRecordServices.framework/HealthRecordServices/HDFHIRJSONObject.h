@class NSString, NSDictionary, HKFHIRVersion, NSURL, NSData;

@interface HDFHIRJSONObject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *JSONObject;
@property (readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion;
@property (readonly, copy, nonatomic) NSURL *sourceURL;
@property (readonly, copy, nonatomic) NSString *detectedResourceType;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *sourceString;

+ (id)resourceTypeOfJSONObject:(id)a0 error:(id *)a1;
+ (id)_dataFromJSONObject:(id)a0 JSONOptions:(unsigned long long)a1;
+ (id)objectWithResourceData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithJSONObject:(id)a0 sourceURL:(id)a1 FHIRVersion:(id)a2;
- (id)_dataWithJSONOptions:(unsigned long long)a0;

@end
