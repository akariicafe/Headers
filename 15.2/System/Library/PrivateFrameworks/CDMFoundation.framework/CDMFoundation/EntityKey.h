@interface EntityKey : NSObject

@property int elementId;
@property int edgeElementId;
@property int parentElementId;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToEntityKey:(id)a0;
- (id)initWithElementId:(int)a0 edgeElementId:(int)a1 parentElementId:(int)a2;

@end
