@class NSArray;

@interface NYAssembly : NSObject <TFFrameworkAssembly> {
    void /* unknown type, empty encoding */ assemblies;
}

@property (nonatomic, readonly) NSArray *assemblies;

- (void).cxx_destruct;
- (id)init;

@end
