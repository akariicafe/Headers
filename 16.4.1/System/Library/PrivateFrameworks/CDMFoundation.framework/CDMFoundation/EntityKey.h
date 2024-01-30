@interface EntityKey : NSObject

@property int elementId;
@property int edgeElementId;
@property int parentElementId;

+ (id)userEntity;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithElementId:(int)a0 edgeElementId:(int)a1 parentElementId:(int)a2;
- (BOOL)isEqualToEntityKey:(id)a0;

@end
