@class NSURL, NSDictionary;

@interface ADMRAIDAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) double maximumExpandWidth;
@property (nonatomic) double maximumExpandHeight;
@property (readonly, nonatomic) BOOL opensNewsLink;
@property (retain, nonatomic) NSDictionary *calendarEventInfo;

+ (id)descriptionForActionType:(long long)a0;
+ (id)errorDescriptionForActionType:(long long)a0 errorType:(long long)a1;
+ (BOOL)doesURLOpenNews:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
