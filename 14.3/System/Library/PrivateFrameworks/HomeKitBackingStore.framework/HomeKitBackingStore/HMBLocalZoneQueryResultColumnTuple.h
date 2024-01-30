@class NSString, HMBModelField;

@interface HMBLocalZoneQueryResultColumnTuple : HMFObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int offset;
@property (readonly, nonatomic) HMBModelField *modelField;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 offset:(int)a1 modelField:(id)a2;

@end
