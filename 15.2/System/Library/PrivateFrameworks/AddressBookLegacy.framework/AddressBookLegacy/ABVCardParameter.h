@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}

- (id)types;
- (void)setValue:(id)a0;
- (void)setIsPrimary:(BOOL)a0;
- (id)grouping;
- (void)addType:(id)a0;
- (void)addTypes:(id)a0;
- (id)value;
- (id)description;
- (BOOL)isPrimary;
- (id)initWithName:(id)a0;
- (id)name;
- (void)dealloc;
- (void)setGrouping:(id)a0;

@end
