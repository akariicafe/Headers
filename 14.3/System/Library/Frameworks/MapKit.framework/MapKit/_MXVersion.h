@class NSArray;

@interface _MXVersion : NSObject

@property (readonly, nonatomic) NSArray *components;

- (id)initWithComponents:(id)a0;
- (id)initWithVersionString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;

@end
