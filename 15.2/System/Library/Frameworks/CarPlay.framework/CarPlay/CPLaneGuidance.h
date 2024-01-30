@class NSArray, NSString;

@interface CPLaneGuidance : NSObject <CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *accNavParameters;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short componentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned short componentID;
@property (nonatomic) unsigned short index;
@property (copy, nonatomic) NSArray *lanes;
@property (copy, nonatomic) NSArray *instructionVariants;


- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
