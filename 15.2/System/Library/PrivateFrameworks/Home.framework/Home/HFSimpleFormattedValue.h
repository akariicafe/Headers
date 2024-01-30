@class NSString;
@protocol HFStringGenerator;

@interface HFSimpleFormattedValue : NSObject <HFDynamicFormattingValue>

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) id<HFStringGenerator> currentFormattedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)observeFormattedValueChangesWithBlock:(id /* block */)a0;
- (id)initWithFormattedValue:(id)a0;

@end
