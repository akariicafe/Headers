@class NSMutableDictionary;

@interface BRStateData : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSMutableDictionary *speedConfigs;
@property (readonly, nonatomic) NSMutableDictionary *speedSlots;
@property (readonly, nonatomic) id propertyList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithStateData:(id)a0;
- (id)initWithState:(unsigned long long)a0 enabled:(BOOL)a1;

@end
