@class NSString, NSDate;

@interface TAUserActivity : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionDictionary;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (id)getDate;
- (id)initWithActivityType:(unsigned long long)a0 date:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
