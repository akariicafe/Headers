@class NSString, SASafeLocation, NSDate;

@interface SASafeLocationUpdateEvent : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SASafeLocation *safeLocation;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) BOOL lastEvent;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionDictionary;
- (id)getDate;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSafeLocation:(id)a0 eventType:(unsigned long long)a1 lastEvent:(BOOL)a2 date:(id)a3;

@end
