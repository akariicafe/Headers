@class NSMutableArray, NSMutableSet;

@interface PPConnectionsScoredLocationGuardedData : NSObject {
    NSMutableArray *_locations;
    NSMutableSet *_seenValues;
}

- (id)init;
- (void).cxx_destruct;

@end
