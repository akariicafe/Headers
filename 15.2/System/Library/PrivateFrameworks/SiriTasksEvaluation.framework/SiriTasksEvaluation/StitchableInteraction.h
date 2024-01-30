@class NSString, NSDate;

@interface StitchableInteraction : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly) double duration;
@property (readonly, nonatomic) BOOL isDonatedBySiri;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 identifier:(id)a1 startDate:(id)a2 duration:(double)a3 isDonatedBySiri:(BOOL)a4;

@end
