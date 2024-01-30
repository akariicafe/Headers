@class NSString;

@interface SiriLongPressButtonConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long buttonIdentifer;
@property (readonly, nonatomic) double longPressInterval;
@property (nonatomic) long long longPressBehavior;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithButtonIdentifier:(long long)a0;
- (void).cxx_destruct;

@end
