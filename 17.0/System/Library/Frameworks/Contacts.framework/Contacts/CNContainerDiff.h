@class NSArray;

@interface CNContainerDiff : NSObject

@property (retain, nonatomic) NSArray *updates;

+ (id)diffContainer:(id)a0 to:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUpdates:(id)a0;

@end
