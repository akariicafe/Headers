@class NSArray, NSString;

@interface WBSRecentlyUsedAutoFillSet : NSObject

@property (readonly, copy, nonatomic) NSArray *fillMatches;
@property (readonly, copy, nonatomic) NSArray *skipMatches;
@property (readonly, copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithFillMatches:(id)a0 skipMatches:(id)a1 label:(id)a2;

@end
