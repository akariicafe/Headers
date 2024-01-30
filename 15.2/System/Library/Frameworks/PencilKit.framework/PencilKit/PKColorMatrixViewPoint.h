@interface PKColorMatrixViewPoint : NSObject

@property (readonly, nonatomic) long long row;
@property (readonly, nonatomic) long long col;

+ (id)pointWithRow:(long long)a0 col:(long long)a1;

- (id)initWithRow:(long long)a0 col:(long long)a1;

@end
