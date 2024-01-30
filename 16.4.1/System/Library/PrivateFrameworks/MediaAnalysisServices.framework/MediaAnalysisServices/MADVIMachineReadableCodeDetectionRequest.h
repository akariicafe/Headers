@class NSArray;

@interface MADVIMachineReadableCodeDetectionRequest : MADRequest

@property (readonly, nonatomic) NSArray *symbologies;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSymbologies:(id)a0;

@end
