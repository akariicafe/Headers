@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long outgoingRecipientCount;
@property unsigned long long incomingSenderCount;
@property unsigned long long incomingRecipientCount;
@property (retain) NSDate *lastOutgoingRecipientDate;
@property (retain) NSDate *lastIncomingSenderDate;
@property (retain) NSDate *lastIncomingRecipientDate;
@property (retain) NSDate *firstOutgoingRecipientDate;
@property (retain) NSDate *firstIncomingSenderDate;
@property (retain) NSDate *firstIncomingRecipientDate;

- (id)lastInteractionDate;
- (void)encodeWithCoder:(id)a0;
- (id)firstInteractionDate;
- (id)description;
- (double)outgoingRecipientTimeInterval;
- (void)updateWithStatistics:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)lastDate:(id)a0 updatedWith:(id)a1;
- (double)incomingRecipientTimeInterval;
- (double)interactionTimeInterval;
- (double)incomingSenderTimeInterval;
- (unsigned long long)interactionCount;
- (id)firstDate:(id)a0 updatedWith:(id)a1;

@end
