@class NSArray;

@interface TUIButtonBarGroupSet : NSObject

@property (retain, nonatomic) NSArray *leadingButtonGroups;
@property (retain, nonatomic) NSArray *trailingButtonGroups;
@property (retain, nonatomic) NSArray *unifiedButtonGroups;
@property (retain, nonatomic) NSArray *leadingSeparators;
@property (retain, nonatomic) NSArray *trailingSeparators;
@property (retain, nonatomic) NSArray *unifiedSeparators;

- (void).cxx_destruct;

@end
