@class NSArray, NSMutableArray;

@interface SARecipe : NSObject {
    NSMutableArray *_states;
}

@property (readonly) unsigned long long identifier;
@property (readonly) NSArray *states;

- (void).cxx_destruct;

@end
