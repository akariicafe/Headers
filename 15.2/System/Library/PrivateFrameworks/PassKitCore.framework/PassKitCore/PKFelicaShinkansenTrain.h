@class NSData, NSNumber, NSString;

@interface PKFelicaShinkansenTrain : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *originStation;
@property (readonly, copy, nonatomic) NSData *destinationStation;
@property (readonly, copy, nonatomic) NSNumber *departureTime;
@property (readonly, copy, nonatomic) NSNumber *arrivalTime;
@property (readonly, copy, nonatomic) NSString *trainName;
@property (readonly, copy, nonatomic) NSNumber *carNumber;
@property (readonly, copy, nonatomic) NSNumber *seatRow;
@property (readonly, copy, nonatomic) NSNumber *seatNumber;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
