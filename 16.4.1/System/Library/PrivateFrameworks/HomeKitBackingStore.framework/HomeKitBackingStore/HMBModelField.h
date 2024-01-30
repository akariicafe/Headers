@class NSString, HMFVersion;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying>

@property (nonatomic, getter=isOptional) BOOL optional;
@property (nonatomic) unsigned long long loggingVisibility;
@property (retain, nonatomic) id defaultValue;
@property (copy, nonatomic) HMFVersion *readonlyVersion;
@property (copy, nonatomic) HMFVersion *unavailableVersion;
@property (retain, nonatomic) NSString *externalRecordField;
@property (nonatomic) BOOL encrypted;
@property (nonatomic) BOOL excludeFromCloudStorage;
@property (nonatomic) BOOL conformsToHMBModelNativeCKWrapper;
@property (copy, nonatomic) id /* block */ encodeBlock;
@property (copy, nonatomic) id /* block */ decodeBlock;
@property (copy, nonatomic) id /* block */ descriptionBlock;
@property (readonly, nonatomic) Class classObj;

+ (id)optionalFieldWithClass:(Class)a0 options:(id)a1;
+ (id)deprecatedField;
+ (id)fieldWithClass:(Class)a0;
+ (id)fieldWithClass:(Class)a0 options:(id)a1;
+ (id)optionalFieldWithClass:(Class)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClass:(Class)a0;
- (id)initWithClass:(Class)a0 options:(id)a1;
- (id)decodeQueryableValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionForEncodedQueryableValue:(id)a0;
- (id)encodeQueryableValue:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
