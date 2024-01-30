@class NSString, NSDictionary;

@interface ATXFaceSuggestionUprankedDateIntervalSignal : NSObject <ATXFaceSuggestionSignal> {
    NSDictionary *_uprankedDateIntervals;
}

@property (readonly, nonatomic) double weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (double)valueForDescriptor:(id)a0;

@end
