@class NSString;

@interface RLMPropertyChange : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id previousValue;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;

@end
