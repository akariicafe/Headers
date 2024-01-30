@class NSNumber;

@interface SetCarDefrosterIntent : INIntent

@property (nonatomic) long long defroster;
@property (nonatomic, retain) NSNumber *enabled;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
