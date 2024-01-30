@class NSArray, NSDictionary, NSString;

@interface VNBurstObservation : VNObservation

@property (retain, nonatomic) NSArray *allImageIdentifiers;
@property (retain, nonatomic) NSArray *bestImageIdentifiers;
@property (retain, nonatomic) NSDictionary *allImageStats;
@property (retain, nonatomic) NSString *coverImageIdentifier;
@property (retain, nonatomic) NSArray *clusters;
@property (nonatomic) BOOL isAction;
@property (nonatomic) BOOL isPortrait;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
