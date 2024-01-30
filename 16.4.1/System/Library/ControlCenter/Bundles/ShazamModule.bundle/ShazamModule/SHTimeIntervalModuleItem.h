@class NSString;

@interface SHTimeIntervalModuleItem : NSObject <SHModuleItem>

@property (readonly, nonatomic) double timeInterval;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 identifier:(id)a1 timeInterval:(double)a2;

@end
