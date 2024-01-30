@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}

- (BOOL)isPrimary;
- (id)initWithName:(id)a0;
- (id)types;
- (id)grouping;
- (void)dealloc;
- (id)value;
- (void)addTypes:(id)a0;
- (id)description;
- (void)setGrouping:(id)a0;
- (void)setValue:(id)a0;
- (id)name;
- (void)setIsPrimary:(BOOL)a0;
- (void)addType:(id)a0;

@end
