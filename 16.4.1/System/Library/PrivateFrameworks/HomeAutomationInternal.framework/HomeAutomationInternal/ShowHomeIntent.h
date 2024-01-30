@class NSArray, INDateComponentsRange;

@interface ShowHomeIntent : INIntent

@property (nonatomic, copy) NSArray *filters;
@property (nonatomic, retain) INDateComponentsRange *dateTimeRange;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
