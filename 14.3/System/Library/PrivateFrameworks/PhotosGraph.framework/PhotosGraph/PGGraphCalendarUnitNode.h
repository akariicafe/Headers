@class MARelation;

@interface PGGraphCalendarUnitNode : PGGraphOptimizedNode {
    unsigned char _calendarUnit : 8;
}

@property (class, readonly) MARelation *dateOfYear;

@property (nonatomic) unsigned short calendarUnitValue : 16;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)initWithLabel:(id)a0;
- (id)label;
- (id)name;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
