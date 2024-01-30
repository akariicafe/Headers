@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSDate *timestamp;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEventType:(unsigned long long)a0;
- (unsigned long long)hash;

@end
