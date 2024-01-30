@class NSString;

@interface MPSNNDefaultPadding : NSObject <MPSNNPadding> {
    unsigned long long _method;
    BOOL _mpsOwned;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paddingWithMethod:(unsigned long long)a0;
+ (id)paddingForTensorflowAveragePooling;
+ (id)paddingForTensorflowAveragePoolingValidOnly;
+ (id)zeroPaddingWithTopAmount:(unsigned long long)a0 bottomAmount:(unsigned long long)a1 leftAmount:(unsigned long long)a2 rightAmount:(unsigned long long)a3;

- (void)dealloc;
- (unsigned long long)paddingMethod;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (id)initWithPaddingMethod:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
