@class NSArray;

@interface TSFrameworkAssembly : NSObject <NFFrameworkAssembly> {
    void /* unknown type, empty encoding */ appConfiguration;
}

@property (nonatomic, readonly) NSArray *assemblies;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNewsAppConfiguration:(id)a0;

@end
