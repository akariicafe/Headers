@class NSArray;

@interface COTimerReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *timers;
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered;
@property (readonly, copy, nonatomic) NSArray *deletes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithFilteredTimers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTimers:(id)a0;
- (id)initWithTimers:(id)a0 deletes:(id)a1;
- (id)initWithCoder:(id)a0;

@end
