@class NSSet;

@interface RWIDriverState : NSObject <NSCopying>

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSSet *sessionIdentifiers;

+ (id)inactive;
+ (id)active;
+ (BOOL)isValidPayload:(id)a0;
+ (id)decodeFromPayload:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeToPayload:(id)a0;

@end
