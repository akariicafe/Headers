@class NSSet;

@interface WKModalContainerClassifierInput : NSObject <MLFeatureProvider> {
    struct RetainPtr<NSString> { void *m_ptr; } _canonicalInput;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTokenizer:(id)a0 rawInput:(id)a1;

@end
