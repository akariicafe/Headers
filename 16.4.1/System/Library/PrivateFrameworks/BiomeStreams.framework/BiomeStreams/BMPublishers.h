@class NSArray;

@interface BMPublishers : NSObject

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (id)merge;
- (id)initWithPublishers:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
