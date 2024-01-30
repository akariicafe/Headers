@class NSUUID, NSString;

@interface HMDAddActionSetLogEvent : HMDLogEvent

@property (class, readonly, copy) NSUUID *uuid;

@property (readonly, copy) NSString *actionSetType;

- (void).cxx_destruct;
- (id)initWithActionSetType:(id)a0;

@end
