@class NSString;

@interface ExplicitZeroPadding : MPSNNDefaultPadding <MPSNNPadding> {
    unsigned long long _paddingLeft;
    unsigned long long _paddingRight;
    unsigned long long _paddingTop;
    unsigned long long _paddingBottom;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (unsigned long long)paddingMethod;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;
- (id)initWithPaddingLeft:(unsigned long long)a0 paddingRight:(unsigned long long)a1 paddingTop:(unsigned long long)a2 paddingBottom:(unsigned long long)a3;

@end
