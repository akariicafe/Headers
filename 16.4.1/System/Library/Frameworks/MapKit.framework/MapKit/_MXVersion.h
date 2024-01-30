@class NSArray;

@interface _MXVersion : NSObject

@property (readonly, nonatomic) NSArray *components;

- (long long)compare:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithComponents:(id)a0;
- (id)initWithVersionString:(id)a0;

@end
