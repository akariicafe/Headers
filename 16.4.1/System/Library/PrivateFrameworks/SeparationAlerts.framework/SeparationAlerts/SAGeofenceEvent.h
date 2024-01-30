@class NSString, CLRegion, NSDate;

@interface SAGeofenceEvent : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CLRegion *region;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, copy, nonatomic) NSDate *eventDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)getDate;
- (void).cxx_destruct;
- (id)initWithRegion:(id)a0 eventType:(unsigned long long)a1 eventDate:(id)a2;

@end
