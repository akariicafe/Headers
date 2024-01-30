@class NSNumber, NSError, MTREventPath;

@interface MTREventReport : NSObject

@property (readonly, copy, nonatomic) MTREventPath *path;
@property (readonly, copy, nonatomic) NSNumber *eventNumber;
@property (readonly, copy, nonatomic) NSNumber *priority;
@property (readonly, copy, nonatomic) NSNumber *timestamp;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithPath:(const struct ConcreteEventPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } *)a0 eventNumber:(id)a1 priority:(id)a2 timestamp:(id)a3 value:(id)a4 error:(id)a5;

@end
