@class NSArray, NSString;

@interface HKCodedValueCollection : NSObject <NSSecureCoding, NSCopying, HKCodedObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *codedValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)codedValueCollectionWithCodedValues:(id)a0;
+ (id)indexableKeyPathsWithPrefix:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCodedValues:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
