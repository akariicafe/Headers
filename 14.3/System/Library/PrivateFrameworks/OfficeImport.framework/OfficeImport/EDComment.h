@class EDString;

@interface EDComment : NSObject

@property (nonatomic) int rowIndex;
@property (nonatomic) int columnIndex;
@property (retain, nonatomic) EDString *author;
@property (nonatomic) BOOL visible;

- (void).cxx_destruct;
- (id)description;

@end
