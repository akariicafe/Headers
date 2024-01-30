@class NSString;

@interface NetworkStateRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long stateAge;
@property (readonly) long long stateDayOfWeek;
@property (readonly) long long stateSlotId;
@property (readonly) long long stateLength;
@property (readonly) NSString *stateBeginningNetworkId;
@property (readonly) NSString *stateEndingNetworkId;
@property (readonly) long long stateType;
@property (readonly) long long stateLabelAssigned;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAge:(long long)a0 dayOfWeek:(long long)a1 slotId:(long long)a2 stateLength:(long long)a3 beginningNetworkId:(id)a4 endingNetworkId:(id)a5 stateType:(long long)a6 label:(long long)a7;
- (void)assignDayOfWeek:(long long)a0;
- (void)assignLabel:(long long)a0;

@end
