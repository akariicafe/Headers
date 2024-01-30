@interface MPSImageErode : MPSImageDilate

- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 values:(const float *)a3;
- (Class)maxClass;

@end
