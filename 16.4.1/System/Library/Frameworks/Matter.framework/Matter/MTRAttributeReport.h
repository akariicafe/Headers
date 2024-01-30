@class MTRAttributePath, NSError;

@interface MTRAttributeReport : NSObject

@property (readonly, copy, nonatomic) MTRAttributePath *path;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithPath:(const void *)a0 value:(id)a1 error:(id)a2;

@end
