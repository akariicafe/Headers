@class PGTitle, NSArray;

@interface PGTitleTuple : NSObject

@property (readonly, nonatomic) PGTitle *title;
@property (readonly, nonatomic) PGTitle *subtitle;
@property (readonly, nonatomic) NSArray *locationNames;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithWithTitle:(id)a0 subtitle:(id)a1 locationNames:(id)a2;
- (id)initWithWithTitle:(id)a0 subtitle:(id)a1;

@end
