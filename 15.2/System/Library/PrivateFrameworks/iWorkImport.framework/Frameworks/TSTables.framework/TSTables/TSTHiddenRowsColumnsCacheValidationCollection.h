@class NSMutableIndexSet;

@interface TSTHiddenRowsColumnsCacheValidationCollection : NSObject

@property (retain, nonatomic) NSMutableIndexSet *visible;
@property (retain, nonatomic) NSMutableIndexSet *hidden;
@property (retain, nonatomic) NSMutableIndexSet *userVisible;
@property (retain, nonatomic) NSMutableIndexSet *userHidden;

- (void).cxx_destruct;
- (id)init;

@end
