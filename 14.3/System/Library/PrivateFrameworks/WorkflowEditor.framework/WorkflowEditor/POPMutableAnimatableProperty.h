@class NSString;

@interface POPMutableAnimatableProperty : POPAnimatableProperty

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ readBlock;
@property (copy, nonatomic) id /* block */ writeBlock;
@property (nonatomic) double threshold;

- (void).cxx_destruct;

@end
