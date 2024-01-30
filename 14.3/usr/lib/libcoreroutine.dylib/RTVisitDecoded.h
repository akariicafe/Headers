@class NSNumber, NSDate;

@interface RTVisitDecoded : NSObject

@property (nonatomic) double logProbability;
@property (retain, nonatomic) NSDate *entryDate;
@property (retain, nonatomic) NSDate *exitDate;
@property (readonly, nonatomic) NSNumber *outputType;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)noVisit;
- (id)initWithEntryDate:(id)a0 exitDate:(id)a1 logProbability:(double)a2;
- (BOOL)partialVisit;
- (BOOL)completeVisit;

@end
