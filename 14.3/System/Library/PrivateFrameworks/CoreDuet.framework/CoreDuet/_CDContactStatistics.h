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

- (double)incomingSenderTimeInterval;
- (id)lastInteractionDate;
- (void).cxx_destruct;
- (id)lastDate:(id)a0 updatedWith:(id)a1;
- (id)firstInteractionDate;
- (unsigned long long)interactionCount;
- (double)incomingRecipientTimeInterval;
- (double)interactionTimeInterval;
- (void)updateWithStatistics:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)firstDate:(id)a0 updatedWith:(id)a1;
- (double)outgoingRecipientTimeInterval;
- (void)encodeWithCoder:(id)a0;

@end
