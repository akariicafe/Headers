@class NSSet, NSDate;

@interface CRKEventLog : NSObject <NSSecureCoding> {
    NSSet *mLazilyLoadedEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSSet *passedInEvents;
@property (copy, nonatomic) NSSet *passedInEventDatas;
@property (readonly, copy, nonatomic) NSSet *events;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 events:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqualToTimeline:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 eventDatas:(id)a2;

@end
