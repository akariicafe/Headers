@class NSArray;

@interface MADVIMachineReadableCodeDetectionRequest : MADRequest

@property (readonly, nonatomic) NSArray *symbologies;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithSymbologies:(id)a0;

@end
