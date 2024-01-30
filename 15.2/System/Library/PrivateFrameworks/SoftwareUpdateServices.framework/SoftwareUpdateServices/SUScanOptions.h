@class NSString, NSMutableSet;

@interface SUScanOptions : SUOptionsBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *types;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, getter=isForced) BOOL forced;
@property (retain, nonatomic) NSString *requestedPMV;
@property (nonatomic) BOOL MDMUseDelayPeriod;
@property (retain, nonatomic) NSString *sessionID;

- (void)encodeWithCoder:(id)a0;
- (void)addType:(int)a0;
- (id)description;
- (id)init;
- (void)clearTypes;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)containsType:(int)a0;
- (void)removeType:(int)a0;
- (BOOL)findsAnyUpdate;

@end
