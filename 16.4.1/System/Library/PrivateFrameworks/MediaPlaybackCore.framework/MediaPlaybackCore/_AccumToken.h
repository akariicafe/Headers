@class NSIndexPath;

@interface _AccumToken : NSObject

@property (retain, nonatomic) id sodToken;
@property (retain, nonatomic) id lodToken;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)tokenWithIndexPath:(id)a0 sod:(id)a1 lod:(id)a2;

- (id)description;
- (void).cxx_destruct;

@end
