@class NSString, NSDate;

@interface TASystemState : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long systemStateType;
@property (readonly, nonatomic) BOOL isOn;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionDictionary;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (id)getDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSystemStateType:(unsigned long long)a0 isOn:(BOOL)a1 date:(id)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)getEventSubtype;
- (void)encodeWithCoder:(id)a0;

@end
