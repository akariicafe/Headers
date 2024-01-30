@class NSString, NSDate;

@interface TAVehicleStateNotification : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long vehicularState;
@property (readonly, nonatomic) unsigned long long vehicularHints;
@property (readonly, nonatomic) unsigned long long operatorState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionDictionary;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (id)getDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVehicularState:(unsigned long long)a0 andVehicularHints:(unsigned long long)a1 andOperatorState:(unsigned long long)a2 date:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
