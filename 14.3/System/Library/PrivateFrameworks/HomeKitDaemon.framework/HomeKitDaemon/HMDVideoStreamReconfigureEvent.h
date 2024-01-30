@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSDate *timestamp;

- (id)initWithEventType:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
