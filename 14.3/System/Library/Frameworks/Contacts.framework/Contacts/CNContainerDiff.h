@class NSArray;

@interface CNContainerDiff : NSObject

@property (retain, nonatomic) NSArray *updates;

+ (id)diffContainer:(id)a0 to:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUpdates:(id)a0;

@end
