@class NSUUID, NSArray;

@interface CPRouteChoice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSArray *summaryVariants;
@property (copy, nonatomic) NSArray *additionalInformationVariants;
@property (copy, nonatomic) NSArray *selectionSummaryVariants;
@property (retain, nonatomic) id userInfo;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSummaryVariants:(id)a0 additionalInformationVariants:(id)a1 selectionSummaryVariants:(id)a2;

@end
