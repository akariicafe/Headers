@class NSNumber, MTRUnitTestingClusterSimpleStruct, NSArray;

@interface MTRUnitTestingClusterTestEventEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *arg1;
@property (copy, nonatomic) NSNumber *arg2;
@property (copy, nonatomic) NSNumber *arg3;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *arg4;
@property (copy, nonatomic) NSArray *arg5;
@property (copy, nonatomic) NSArray *arg6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
