@class NSArray, RCPEventSenderProperties;

@interface RCPNaturalInputCollectionEvent : NSObject <NSCopying>

@property (readonly, copy) NSArray *manipulators;
@property (readonly, copy) NSArray *selections;
@property (readonly) long long phase;
@property (readonly) unsigned long long timestamp;
@property (readonly) RCPEventSenderProperties *senderProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithManipulators:(id)a0 selections:(id)a1 phase:(long long)a2 timestamp:(unsigned long long)a3 senderProperties:(id)a4;

@end
