@class NSString, NSDate;

@interface MNTimepoint : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leaveNow;
+ (id)leaveBy:(id)a0;
+ (id)arriveBy:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 date:(id)a1;
- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;

@end
