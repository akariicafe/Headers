@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}

- (BOOL)isPrimary;
- (id)types;
- (void)dealloc;
- (void)addTypes:(id)a0;
- (id)value;
- (id)grouping;
- (id)description;
- (void)addType:(id)a0;
- (void)setGrouping:(id)a0;
- (id)name;
- (void)setIsPrimary:(BOOL)a0;
- (void)setValue:(id)a0;
- (id)initWithName:(id)a0;

@end
