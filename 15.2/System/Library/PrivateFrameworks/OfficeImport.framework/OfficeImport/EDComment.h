@class EDString;

@interface EDComment : NSObject

@property (nonatomic) int rowIndex;
@property (nonatomic) int columnIndex;
@property (retain, nonatomic) EDString *author;
@property (nonatomic) BOOL visible;

- (id)description;
- (void).cxx_destruct;

@end
