@class NSString, HFStateDumpBuilderContext;

@interface HFStateDumpEntry : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id object;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) HFStateDumpBuilderContext *context;

- (void).cxx_destruct;

@end
