@class NSString, NSArray;

@interface MTLCounterSetInternal : NSObject <MTLCounterSet> {
    NSString *_description;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *counters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 description:(id)a1 counters:(id)a2;

@end
