@class NSArray;

@interface NMAssembly : NSObject <NFFrameworkAssembly> {
    void /* unknown type, empty encoding */ assemblies;
}

@property (nonatomic, readonly) NSArray *assemblies;

- (id)init;
- (void).cxx_destruct;

@end
