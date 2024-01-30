@class NSString, NSArray, NSDate;

@interface ODCurareDKEvent : NSObject

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) NSString *identifier;
@property (readonly, copy) NSArray *metadata;

- (id)initWithDKEvent:(id)a0;
- (void).cxx_destruct;

@end
