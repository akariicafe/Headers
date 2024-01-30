@class NSData;

@interface MPSNNNeuronDescriptor : NSObject <NSCopying, NSSecureCoding> {
    BOOL _noCopy;
    unsigned long long _count;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int neuronType;
@property (nonatomic) float a;
@property (nonatomic) float b;
@property (nonatomic) float c;
@property (retain, nonatomic) NSData *data;

+ (id)cnnNeuronDescriptorWithType:(int)a0 a:(float)a1;
+ (id)cnnNeuronDescriptorWithType:(int)a0 a:(float)a1 b:(float)a2;
+ (id)cnnNeuronPReLUDescriptorWithData:(id)a0 noCopy:(BOOL)a1;
+ (id)cnnNeuronDescriptorWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;
+ (id)cnnNeuronDescriptorWithType:(int)a0;

- (id)initWithPReLUWithData:(id)a0 noCopy:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })neuronInfo;
- (id)initWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;
- (id)initWithCoder:(id)a0;
- (void)initializeWithPReLUWithData:(id)a0 noCopy:(BOOL)a1;
- (id)debugDescription;
- (void)initializeWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;
- (void)encodeWithCoder:(id)a0;

@end
